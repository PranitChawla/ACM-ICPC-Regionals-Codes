#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll dp[402][402];
ll a[402];
ll sum[402];
void solve (ll i, ll j)
{
	if (dp[i][j]!=-1)
		return;
	else
	{
		if (i==j)
		{
			dp[i][j]=0;
			return;
		}
		else if (i<j)
		{
			dp[i][j]=1e18;
			for (ll k=i;k<j;k++)
			{
				solve(i,k);
				solve(k+1,j);
				ll a=dp[i][k]+dp[k+1][j]+(sum[j]-sum[k])+(sum[k]-sum[i-1]);
				dp[i][j]=min(dp[i][j],a);
			}
				return;
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	memset(sum,0,sizeof(sum));
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (i==1)
			sum[i]=a[i];
		else
			sum[i]=sum[i-1]+a[i];
	}
	// for (ll i=0;i<=n;i++)
	// 	dp[i][i]=0;
	// for (ll l=2;l<=n;l++)
	// {
	// 	for (ll i=1;i<=n-l+1;i++)
	// 	{
	// 		ll j=i+l-1;
	// 		dp[i][j]=1e18;
	// 		for (ll k=i;k<j;k++)
	// 		{
	// 			ll ans=dp[i][k]+dp[k+1][j]+(sum[k]-sum[i-1]+sum[j]-sum[k]);
	// 			dp[i][j]=min(dp[i][j],ans);
	// 		}
	// 	}
	// }
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=n;j++)
		{
			dp[i][j]=-1;
		}
	}
	solve(1,n);
	cout<<dp[1][n];
}