#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n+1];
	ll sum[n+1];
	memset(sum,0,sizeof(sum));
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	sum[1]=a[1];
	for (ll i=2;i<=n;i++)
		sum[i]=sum[i-1]+a[i];
	ll dp[k+1][n+1];
	memset(dp,0,sizeof(dp));
	// for (ll i=1;i<=n;i++)
	// {
	// 	if (i>=m)
	// 		sum_m[i]=sum[i]-sum[i-m];
	// }
	for (ll i=1;i<=k;i++)
	{
		ll mq=-1;
		for (ll j=1;j<=n;j++)
		{
			if (j>=m)
			{
			mq=max(dp[i-1][j-m]+sum[j]-sum[j-m],mq);
			dp[i][j]=mq;
			}
		}
	}
	ll ans=INT_MIN;
	for (ll i=1;i<=n;i++)
		ans=max(ans,dp[k][i]);
	cout<<ans;
	//cout<<dp[n][k];

}