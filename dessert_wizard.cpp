#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		ll left_min[n];
		ll right_min[n];
		ll left_max[n];
		ll right_max[n];
		for (ll i=0;i<n;i++)
		{
			if (i==0)
			{
				left_max[i]=a[i];
				left_min[i]=a[i];
			}
			else 
			{
				left_max[i]=max(a[i],left_max[i-1]+a[i]);
				left_min[i]=min(a[i],left_min[i-1]+a[i]);
			}
		}
		for (ll i=n-1;i>=0;i--)
		{
			if (i==n-1)
			{
				right_min[i]=a[i];
				right_max[i]=a[i];
			}
			else
			{
				right_max[i]=max(right_max[i+1]+a[i],a[i]);
				right_min[i]=min(right_min[i+1]+a[i],a[i]);
			}
		}
		for (ll i=0;i<n;i++)
			cout<<left_max[i]<<endl;
		ll ma=INT_MIN;
	for (ll i=0;i<n-1;i++)
	{
		ma=max(ma,abs(left_min[i]-right_max[i+1]));
		ma=max(ma,abs(left_max[i]-right_min[i+1]));
	}
	//cout<<ma<<endl;
	}
}