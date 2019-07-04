#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m;
ll a[12];
ll b[12];
ll c[12];
ll d[12];
ll cnt[12];
ll c0,d0;
ll dp[1002][15];
int main()
{
	ll n;
	cin>>n;
	cin>>m;
	cin>>c0>>d0;
	memset(dp,-1,sizeof(dp));
	for (ll i=1;i<=m;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		cnt[i]=a[i]/b[i];
	}
	// solve(n);
	// ll a=INT_MIN;
	// for (ll i=0;i<=n;i++)
	// {
	// 	cout<<dp[i]+((n-i)/c0)*d0<<" ";
	// }
	for (ll i=0;i<=n;i++)
		dp[i][0]=0;
	for (ll i=1;i<=10;i++)
		dp[0][i]=0;
	for (ll i=1;i<=n;i++)
	{
		
		for (ll j=1;j<=m;j++)
		{
			ll ans=INT_MIN;
			for (ll k=0;k<=a[j]/b[j];k++)
			{
				if (i>=k*c[j])
				ans=max(dp[i-k*c[j]][j-1]+k*d[j],ans);
			}
			dp[i][j]=ans;
		}
	}
	ll ans=-1e18;
	for (ll i=0;i<=n;i++)
	{
		ans=max(dp[i][m]+(n-i)/c0*d0,ans);
	}
	cout<<ans;
}