#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
	ll dp[3002][3002];
int main()
{
	string s,t;
	cin>>s>>t;
	ll n1=s.length();
	ll n2=t.length();
	for (ll i=0;i<=n1;i++)
		dp[i][0]=0;
	for (ll i=0;i<=n2;i++)
		dp[0][i]=0;
	for (ll i=1;i<=n1;i++)
	{
		for (ll j=1;j<=n2;j++)
		{
			if (s[i-1]==t[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	// for (ll i=1;i<=n1;i++)
	// {
	// 	for (ll j=1;j<=n2;j++)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	ll i=n1;
	ll j=n2;
	stack <char> ans;
	while (i>=1&&j>=1)
	{
		if (s[i-1]==t[j-1])
		{
			ans.push(s[i-1]);
			i--;
			j--;
		}
		else
		{
			if (dp[i-1][j]>dp[i][j-1])
			{
				i--;
			}
			else
				j--;
		}
	}
	while (!ans.empty())
	{
		cout<<ans.top();
		ans.pop();
	}
	//cout<<dp[n1][n2];
}