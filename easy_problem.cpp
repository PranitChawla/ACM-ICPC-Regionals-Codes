#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll dp[n][4];
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<4;j++)
		{
			dp[i][j]=0;
		}
	}
	if (s[0]=='h')
		dp[0][0]=a[0];
	for (ll i=1;i<n;i++)
	{
		if (s[i]=='h')
			dp[i][0]=dp[i-1][0]+a[i];
		else
			dp[i][0]=dp[i-1][0];
	}
	for (ll i=1;i<n;i++)
	{
		if (s[i]=='a')
		{
			dp[i][1]=min(dp[i-1][0],dp[i-1][1]+a[i]);
		}
		else
			dp[i][1]=dp[i-1][1];
	}
	for (ll i=2;i<n;i++)
	{
		if (s[i]=='r')
		{
			dp[i][2]=min(dp[i-1][1],dp[i-1][2]+a[i]);
		}
		else
			dp[i][2]=dp[i-1][2];
	}
	for (ll i=3;i<n;i++)
	{
		if (s[i]=='d')
		{
			dp[i][3]=min(dp[i-1][2],dp[i-1][3]+a[i]);
		}	
		else
			dp[i][3]=dp[i-1][3];
	}
	cout<<dp[n-1][3];	
}