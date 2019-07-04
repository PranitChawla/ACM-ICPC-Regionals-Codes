#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll dp[n+1];
	dp[0]=0;
	dp[1]=0;
	for (ll i=2;i<=n;i++)
	{
		ll mi=INT_MAX;
		for (ll j=1;j<=k;j++)
		{
			if (i>j)
				mi=min(mi,dp[i-j]+abs(a[i]-a[i-j]));
		}
		dp[i]=mi;
	}
	cout<<dp[n];
}