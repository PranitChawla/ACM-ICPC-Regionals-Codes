#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a, pair <ll,ll> b)
{
	if (a.second!=b.second)
		return (a.second<b.second);
	else
		return (a.first<b.first);
}
bool compare2 (pair <ll,ll> a, pair <ll,ll> b)
{
	return (a.first<b.first);	
}
int main()
{
	vector < pair <ll,ll> > list;
	int n;
	cin>>n;
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		list.push_back(make_pair(a,b));	
	}
	ll total=0;
	ll total_left=0;
	sort(list.begin(),list.end(),compare);
	pair <ll,ll> p;
	p=*(list.end()-1);
	vector < pair <ll,ll> >::iterator it;
	it=list.end()-1;
	while (p.second!=0&&list.size()>0)
	{
		p=*it;
		total+=p.first;
		total_left+=p.second;
		total_left--;
		list.erase(it);
		it=list.end()-1;
		p=*it;
	}
	sort(list.begin(),list.end(),compare2);
	while (total_left>=0&&list.size()>0)
	{
		it=list.end()-1;
		p=*it;
		total+=p.first;
		total_left--;
		list.erase(it);
	}
	cout<<total;
}	