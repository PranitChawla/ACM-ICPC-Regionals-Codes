#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[10004];
ll calc_sum (ll a[],ll n,ll k)
{
	if (n<=0)
		return 0;
	if (dp[n]>-1)
		return dp[n];
	else if (n==1)
	{
		dp[n-1]=a[n-1];
		return dp[n-1];
	}
	else
	{
		dp[n]=max((a[n-1]+calc_sum(a,n-k-1,k)),calc_sum(a,n-1,k));
		return dp[n];
	}
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n+1];
		for (ll i=0;i<1004;i++)
			dp[i]=-1;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<calc_sum(a,n,k)<<endl;
		// dp[0]=0;
		// for (ll i=1;i<=n;i++)
		// {	
		// 	dp[i]=max(dp[i-k-1]+a[i],dp[i-1]);
		// }
		// for (ll i=1;i<=n;i++)
		// 	cout<<dp[i]<<" ";
		// cout<<dp[n]<<endl;
	}
}