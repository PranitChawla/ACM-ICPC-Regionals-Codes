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
	sort(a,a+n);
	ll q;
	cin>>q;
	while (q--)
	{
		ll low=0;
		ll high=n-1;
		ll x;
		cin>>x;
		ll ans;
		while (low<=high)
		{
			ll mid=low+(high-low)/2;
			if (a[mid]<x)
				low=mid+1;
			else if (a[mid]>x)
				high=mid-1;
			else
			{
				ans=mid+1;
				break;
			}
		}
		cout<<ans<<endl;
	}
}