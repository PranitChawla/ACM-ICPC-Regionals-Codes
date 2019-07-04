#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[102][100004];
int main()
{
	ll n,W;
	cin>>n>>W;
	ll w[n+1],v[n+1];
	ll sum=0;
	for (ll i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i];
		sum+=v[i];
	}
	for (ll i=0;i<=sum;i++)
	{
		if (i==0)
			dp[0][i]=0;
		else
			dp[0][i]=INT_MAX;
	}
	ll ans=INT_MIN;
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=sum;j++)
		{
			if (v[i]<=j)
				dp[i][j]=min(dp[i-1][j-v[i]]+w[i],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	for (ll i=1;i<=sum;i++)
	{
		if (dp[n][i]<=W)
			ans=i;
	}
	cout<<ans;
	}
