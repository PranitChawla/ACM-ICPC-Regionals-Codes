#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll o[n+1];
	ll e[n+1];
	memset(o,0,sizeof(o));
	memset(e,0,sizeof(e));
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (i==1)
		{
			o[i]=a[i];
			e[i]=0;
		}
		else if (i%2)
			{
				o[i]=o[i-1]+a[i];
				e[i]=e[i-1];
			}
		else
		{
			e[i]=e[i-1]+a[i];
			o[i]=o[i-1];
		}
	}
	ll c=0;
	for (ll i=1;i<=n;i++)
	{
		ll so=o[i-1]+(e[n]-e[i]);
		ll se=e[i-1]+(o[n]-o[i]);
		if (so==se)
			c++;
	}
	cout<<c;
}