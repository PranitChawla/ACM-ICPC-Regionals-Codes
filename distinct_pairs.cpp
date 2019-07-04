#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	return (a.first<b.first);
}
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n],b[m];
	vector < pair <ll,ll> > v1,v2;
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
		v1.push_back(make_pair(a[i],i));
	}
	for (ll i=0;i<m;i++)
	{
		cin>>b[i];
		v2.push_back(make_pair(b[i],i));
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	vector < pair <ll,ll> > ans;
	if (n!=1&&m!=1)
	{
	for (ll i=0;i<m;i++)
	{
		ans.push_back(make_pair(v1[0].second,v2[i].second));
	}
	for (ll i=1;i<n;i++)
	{
		ans.push_back(make_pair(v1[i].second,v2[m-1].second));
	}
	}
	else if (n==1&&m!=1)
	{
		for (ll i=0;i<m;i++)
		{
			ans.push_back(make_pair(v1[0].second,v2[i].second));
		}
	}
	else if (n!=1&&m==1)
	{
		for (ll i=0;i<n;i++)
		{
			ans.push_back(make_pair(v1[i].second,v2[0].second));
		}
	}
	else
	{
		ans.push_back(make_pair(v1[0].second,v2[0].second));
	}
	for (ll i=0;i<ans.size();i++)
	{
		cout<<ans[i].first<<" "<<ans[i].second;
		cout<<endl;
	}

}