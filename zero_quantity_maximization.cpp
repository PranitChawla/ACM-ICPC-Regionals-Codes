#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll b[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	for (ll i=0;i<n;i++)
		cin>>b[i];
	ll c=0;
	map < pair <ll,ll> ,ll> m;
	for (ll i=0;i<n;i++)
	{
		if (a[i]==0&&b[i]==0)
			c++;
		else if (a[i]==0&&b[i]!=0)
		{}
		else
		{
			ll g=__gcd(a[i],b[i]);
			ll e=a[i]/g;
			ll f=b[i]/g;
			pair <ll,ll> p;
			p=make_pair(f,e);
			if (m.find(p)==m.end())
			{
				m.insert(make_pair(p,1));
			}
			else
			{
				m.find(p)->second++;
			}
		}
	}
	map < pair <ll,ll> , ll>::iterator it;
	ll ma=0;
	for (it =m.begin();it!=m.end();it++)
	{
		ma=max(ma,it->second);
	}
	cout<<ma+c;
}