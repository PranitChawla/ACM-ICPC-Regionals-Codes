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
	if (W>=100001)
	{
		cout<<sum;
	}
	else
	{
	for (ll i=0;i<=W;i++)
		dp[0][i]=0;
	for (ll i=0;i<=n;i++)
		dp[i][0]=0;
	ll ans=INT_MIN;
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=W;j++)
		{
			if (w[i]<=j)
				dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans;
	}
}