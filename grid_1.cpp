#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;
int main()
{
	ll h,w;
	cin>>h>>w;
	ll dp[1002][1002];
	memset(dp,0,sizeof(dp));
	string s[h];
	for (ll i=0;i<h;i++)
		cin>>s[i];
	ll f=1;
	for (ll i=1;i<w;i++)
	{
		if (s[0][i]!='#'&&f)
			dp[0][i]=1;
		else
			{
				dp[0][i]=0;
				f=0;
			}
	}
	f=1;
	for (ll i=1;i<h;i++)
	{
		if (s[i][0]!='#'&&f)
			dp[i][0]=1;
		else
			{
				dp[i][0]=0;
				f=0;
			}
	}
	for (ll i=1;i<h;i++)
	{
		for (ll j=1;j<w;j++)
		{
			if (s[i][j]=='.')
			{
				dp[i][j]=(dp[i-1][j]%m+dp[i][j-1]%m)%m;
			}
		}
	}
	cout<<dp[h-1][w-1]%m;
}