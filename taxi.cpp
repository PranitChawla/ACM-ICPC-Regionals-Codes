#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=0;
	sort(a,a+n);
	ll c=0;
	for (ll i=0;i<n;)
	{
		c+=a[i];
		if (c<=4)
		{
			i++;
		}
		else
		{
			ans++;
			c=0;
		}
	}
	cout<<ans;
}