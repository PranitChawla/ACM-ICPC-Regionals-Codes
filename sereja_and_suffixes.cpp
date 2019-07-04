#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll m;
	cin>>m;
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	set <ll> s;
	ll ans[n+1];
	for (ll i=n;i>=1;i--)
	{
		s.insert(a[i]);
		ans[i]=s.size();
	}
	for (ll i=0;i<m;i++)
	{
		ll t;
		cin>>t;
		cout<<ans[t]<<endl;
	}
}