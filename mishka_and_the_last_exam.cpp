#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll b[n+1];
	for (ll i=1;i<=n/2;i++)
		cin>>b[i];
	ll a[n+1];
	a[1]=0;
	for (ll i=2;i<=n/2;i++)
	{
		if (b[i]<=b[i-1])
			a[i]=a[i-1];
		else
		{
			ll t=b[i-1]-a[i-1];
			a[i]=b[i]-t;
		}
	}
	for (ll i=n/2+1;i<=n;i++)
	{
		a[i]=b[n-i+1]-a[n-i+1];
	}
	for (ll i=1;i<=n;i++)
		cout<<a[i]<<" ";
}