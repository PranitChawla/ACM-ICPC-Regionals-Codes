#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll dp[n];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for (ll i=1;i<n;i++)
	{
		if (a[i]>a[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=1;
	}
	for (ll i=n-1;i>0;i--)
	{
		if (a[i-1]>a[i])
		{
			if (dp[i-1]<=dp[i])
				dp[i-1]=dp[i]+1;
		}
	}
	ll ans=0;
	for (ll i=0;i<n;i++)
		ans+=dp[i];
	cout<<ans;
}