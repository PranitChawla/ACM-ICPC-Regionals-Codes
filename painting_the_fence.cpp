#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,q;
	cin>>n>>q;
	vector < pair <ll,ll> > v;
	ll count[n+1];
	memset(count,0,sizeof(count));
	for (ll i=0;i<q;i++)
	{
		ll l,r;
		cin>>l>>r;
		v.push_back(make_pair(l,r));
		for (ll j=v[i].first;j<=v[i].second;j++)
			count[j]++;
	}
	ll ans[q];
	for (ll i=0;i<q;i++)
	{
		ll temp[n+1];
		for (ll j=1;j<=n;j++)
			temp[j]=count[j];
		for (ll j=v[i].first;j<=v[i].second;j++)
			temp[j]--;
		ll c=0;
		for (ll j=1;j<=n;j++)
		{
			if (temp[j]>0)
				c++;
		}
		ans[i]=c;
	}
	ll max_ind;
	ll max=INT_MIN;
	for (ll i=0;i<q;i++)
	{
		if (ans[i]>max)
		{
			max=ans[i];
			max_ind=i;
		}
	}
	for (ll i=1;i<=n;i++)
	{
		if (i>=v[max_ind].first&&i<=v[max_ind].second)
			count[i]--;
	}
	ll ans1[q];
	for (ll i=0;i<q;i++)
	{
		ll temp[n+1];
		for (ll j=1;j<=n;j++)
			temp[j]=count[j];
		for (ll j=v[i].first;j<=v[i].second;j++)
			temp[j]--;
		ll c=0;
		for (ll j=1;j<=n;j++)
		{
			if (temp[j]>0)
				c++;
		}
		ans1[i]=c;
	}
	ll min_ind1;
	ll min1=INT_MIN;
	for (ll i=0;i<q;i++)
	{
		if (ans1[i]>min1)
		{
			min1=ans[i];
			min_ind1=i;
		}
	}
	for (ll i=1;i<=n;i++)
	{
		if (i>=v[min_ind1].first&&i<=v[min_ind1].second)
			count[i]--;
	}
	ll c=0;
	for (ll i=1;i<=n;i++)
	{
		if (count[i]>0)
			c++;
	}
	cout<<c;
}