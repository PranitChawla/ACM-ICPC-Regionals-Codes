#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector < pair <ll,ll> > v[10004];
ll dis[10004];
struct compare 
{
	bool operator () (const pair <ll,ll> &p1,const pair <ll,ll> &p2)
	{
		return (p1.second<p2.second);
	}
};
int main()
{
	ll n,m;
	cin>>n>>m;
	for (ll i=0;i<m;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		v[a].push_back(make_pair(b,c));
		// v[b].push_back(make_pair(a,c));
	}
	for (ll i=1;i<=n;i++)
		dis[i]=INT_MAX;
	priority_queue < pair <ll,ll>,vector < pair <ll,ll> >,compare > q;
	dis[1]=0;
	q.push(make_pair(1,dis[1]));
	while (!q.empty())
	{
		pair <ll,ll> p=q.top();
		q.pop();
		for (ll i=0;i<v[p.first].size();i++)
		{
			if (dis[v[p.first][i].first]>dis[p.first]+v[p.first][i].second)
			{
				dis[v[p.first][i].first]=dis[p.first]+v[p.first][i].second;
				q.push(v[p.first][i]);
			}
		}
	}
	for (ll i=2;i<=n;i++)
		cout<<dis[i]<<" ";
}