#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	if (a.first!=b.first)
		return (a.first<b.first);
	else
		return (a.second<b.second);
}
int main()
{
	ll n;
	cin>>n;
	vector < pair <ll,ll> > v;
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),compare);
	ll last=INT_MIN;
	vector < pair<ll,ll> >::iterator it;
	for (it=v.begin();it!=v.end();it++)
	{
		pair <ll,ll> p;
		p=*it;
		if (last<=p.second)
			last=p.second;
		else
			last=p.first;
	}
	cout<<last;
}