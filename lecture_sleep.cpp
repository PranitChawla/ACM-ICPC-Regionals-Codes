#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	ll t[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	for (ll i=1;i<=n;i++)
		cin>>t[i];
	ll prefix_sum[n+1];
	ll prefix_sum_ones[n+1];
	prefix_sum[0]=0;
	prefix_sum_ones[0]=0;
	for (ll i=1;i<=n;i++)
	{
		if (i==1)
		{
			prefix_sum[i]=a[i];
			if (t[i]==1)
			{
				prefix_sum_ones[i]=a[i];
			}
			else
				prefix_sum_ones[i]=0;
		}
		else
		{
			prefix_sum[i]=prefix_sum[i-1]+a[i];
			(t[i]==1)?prefix_sum_ones[i]=prefix_sum_ones[i-1]+a[i]:prefix_sum_ones[i]=prefix_sum_ones[i-1];
		}
	}
	ll ma=INT_MIN;
	for (ll i=k;i<=n;i++)
	{
		ma=max(ma,prefix_sum_ones[i-k]+prefix_sum[i]-prefix_sum[i-k]+prefix_sum_ones[n]-prefix_sum_ones[i]);
	}
	cout<<ma;
}