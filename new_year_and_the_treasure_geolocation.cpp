#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll x[n];
	ll y[n];
	ll x1[n];
	ll y1[n];
	ll x2[n][n];
	ll y2[n][n];
	map < pair <ll,ll> ,ll> m;
	map < pair <ll,ll> ,ll>::iterator it;
	for (ll i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for (ll i=0;i<n;i++)
		cin>>x1[i]>>y1[i];
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<n;j++)
		{
			x2[i][j]=x1[j]+x[i];
			y2[i][j]=y[i]+y1[j];
		}
	}
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<n;j++)
		{
			pair <ll,ll> p;
			p.first=x2[i][j];
			p.second=y2[i][j];
			if (m.find(p)==m.end())
				m.insert(make_pair(p,1));
		else
		{
			it=m.find(p);
			it->second++;
		}
	}
}
	ll ax,ay;
	for (it=m.begin();it!=m.end();it++)
	{
		if ((it->second)==n)
		{
			ax=(it->first).first;
			ay=(it->first).second;
			break;
		}
	}
	cout<<ax<<" "<<ay;
}