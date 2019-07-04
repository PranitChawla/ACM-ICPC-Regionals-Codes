#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll c[n];
	string s[n];
	for (ll i=0;i<n;i++)
		cin>>c[i];
	for (ll i=0;i<n;i++)
		cin>>s[i];
	ll dp[n][2];
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<2;j++)
		{
			dp[i][j]=1e18;
		}
	}
	dp[0][0]=0;
	dp[0][1]=c[0];
	for (ll i=1;i<n;i++)
	{
		string temp(s[i]);
		string temp2(s[i-1]);
		reverse(temp.begin(),temp.end());
		reverse(temp2.begin(),temp2.end());
		if (s[i].compare(s[i-1])>=0)
			dp[i][0]=min(dp[i][0],dp[i-1][0]);
		if (s[i].compare(temp2)>=0)
			dp[i][0]=min(dp[i][0],dp[i-1][1]);
		if (temp.compare(s[i-1])>=0)
			dp[i][1]=min(dp[i][1],dp[i-1][0]+c[i]);
		if (temp.compare(temp2)>=0)
			dp[i][1]=min(dp[i][1],dp[i-1][1]+c[i]);
	}
	if (dp[n-1][0]==1e18&&dp[n-1][1]==1e18)
		cout<<-1;
	else
	{
		cout<<min(dp[n-1][0],dp[n-1][1]);
	}
}