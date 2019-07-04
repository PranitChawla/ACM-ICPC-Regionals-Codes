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
	ll ans=1e18;
	for (ll i=0;i<n;i++)
	{
		ll sum=0;
		for (ll j=0;j<n;j++)
		{
			sum+=min(a[j],abs(a[j]-a[i]));
		}
		ans=min(sum,ans);
	}
	cout<<ans;
}