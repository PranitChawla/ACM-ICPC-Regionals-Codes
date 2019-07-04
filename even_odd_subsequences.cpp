#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	return (a.first>b.first);
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		vector < pair <ll,ll> > o;
		vector < pair <ll,ll> > e;
		for (ll i=0;i<n;i++)
		{
			if (a[i]%2==0)
				e.push_back(make_pair(a[i],i));
			else
				o.push_back(make_pair(a[i],i));
		}
		sort(e.begin(),e.end(),compare);
		sort(o.begin(),o.end(),compare);
		ll sum=0;
		ll cur=0;
		for (ll i=0;i<o.size();i++)
		{
			if (i==0)
			{
				sum+=o[i].first;
				cur=o[i].second;
			}
			else if (abs(o[i].second-cur)>k)
			{
				sum+=o[i].first;
				cur=o[i].second;
			}
		}
		cur=0;
		for (ll i=0;i<e.size();i++)
		{
			if (i==0)
			{
				sum+=e[i].first;
				cur=e[i].second;
			}
			else if (abs(e[i].second-cur)>k)
			{
				sum+=e[i].first;
				cur=e[i].second;
			}
	}
	cout<<sum<<endl;
}
}