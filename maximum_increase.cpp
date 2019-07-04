#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll dp[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	dp[0]=0;
	dp[1]=1;
	for (ll i=2;i<=n;i++)
	{
		if (a[i]>a[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=1;
	}
	ll ans=INT_MIN;
	for (ll i=1;i<=n;i++)
		ans=max(ans,dp[i]);
	cout<<dp[n];
}