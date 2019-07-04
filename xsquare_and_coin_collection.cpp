#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		ll dp[n];
		memset(dp,0,sizeof(dp));
		if (a[0]<=k)
			dp[0]=a[0];
		else
			dp[0]=0;
		for (ll i=1;i<n;i++)
		{
			if (a[i]<=k)
			{
				dp[i]=max(dp[i-1]+a[i],a[i]);
			}
		}
		ll ma=INT_MIN;
		for (ll i=0;i<n;i++)
			ma=max(ma,dp[i]);
		cout<<ma<<endl;
	}
}