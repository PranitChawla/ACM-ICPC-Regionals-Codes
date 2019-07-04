#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	ll sum[n+1];
	memset(sum,0,sizeof(sum));
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (i==1)
			sum[i]=a[i];
		else
			sum[i]=sum[i-1]+a[i];
	}
	ll dp[n+1];
	for (ll i=k;i<=n;i++)
	{
		dp[i]=sum[i]-sum[i-k];
	}
	ll ans=INT_MAX;
	ll j;
	for (ll i=k;i<=n;i++)
	{
		if (dp[i]<ans)
		{
			ans=dp[i];
			j=i-k+1;
		}
	}
	cout<<j;
}