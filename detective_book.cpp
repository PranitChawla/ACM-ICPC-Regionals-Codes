#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll ans=0;
	ll ma;
	for (ll i=1;i<=n;i++)
	{
		if (i==1)
			ma=a[1];
		else
		{
			ma=max(ma,a[i]);
		}
		if (ma==i&&a[i]==i)
			ans++;
	}
	cout<<ans;
}