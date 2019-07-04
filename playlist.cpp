#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	if (a.second!=b.second)
		return a.second>b.second;
	else
		return a.first<b.first;
}
int main()
{
	ll n,k;
	cin>>n>>k;
	vector < pair <ll,ll> > v;
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),compare);
	ll sum=0;
	priority_queue < ll,vector <ll> ,greater <ll> > q;
	ll ma=INT_MIN;
	for (ll i=0;i<n;i++)
	{
		if (i<k)
		{
			q.push(v[i].first);
			sum+=v[i].first;
		}
		else
		{
			ll temp=q.top();
			if (v[i].first>temp)
			{
				sum-=temp;
				sum+=v[i].first;
				q.pop();
				q.push(v[i].first);
			}
		}
		ma=max(ma,sum*v[i].second);
	}
	cout<<ma;
}