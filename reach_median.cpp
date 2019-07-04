#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,s;
	cin>>n>>s;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if (a[n/2]>s)
	{
		ll ans=0;
		for (ll i=n/2;i>=0;i--)
		{
			if (a[i]>s)
				ans+=(a[i]-s);
		}
		cout<<ans;
	}
	else if (a[n/2]<s)
	{
		ll ans=0;
		for (ll i=n/2;i<n;i++)
		{
			if (a[i]<s)
				ans+=(s-a[i]);
		}
		cout<<ans;
	}
	else 
		cout<<0;

}