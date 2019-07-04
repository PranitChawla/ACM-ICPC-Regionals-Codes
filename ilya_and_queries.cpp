#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	ll n=s.length();
	ll dp[n+1];
	dp[0]=0;
	for (ll i=1;i<n;i++)
	{
		if (s[i-1]==s[i])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=dp[i-1];
	}
	dp[n]=dp[n-1];
	ll m;
	cin>>m;
	for (ll i=0;i<m;i++)
	{
		ll c,d;
		cin>>c>>d;
		cout<<dp[d-1]-dp[c-1]<<endl;
	}
}