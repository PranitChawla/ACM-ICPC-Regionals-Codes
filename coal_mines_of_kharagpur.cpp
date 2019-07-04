#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> adj_list[100004];
ll vis[100004];
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	return (a.second>b.second);
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,m;
		cin>>n>>m;
		memset(vis,0,sizeof(vis));
		for (ll i=0;i<m;i++)
		{
			ll u,v;
			cin>>u>>v;
			adj_list[u].push_back(v);
			adj_list[v].push_back(u);
		}
		vector < pair <ll,ll> > sorted_list;
		vector <ll> guards;
		for (ll i=1;i<=n;i++)
		{
			sorted_list.push_back(make_pair(i,adj_list[i].size()));
		}
		sort(sorted_list.begin(),sorted_list.end(),compare);
		for (ll i=0;i<sorted_list.size();i++)
		{
			if (!vis[sorted_list[i].first])
			{
				vis[sorted_list[i].first]=1;
				guards.push_back(sorted_list[i].first);
				for (ll j=0;j<adj_list[sorted_list[i].first].size();j++)
				{
					if (!vis[adj_list[sorted_list[i].first][j]])
					{
						vis[adj_list[sorted_list[i].first][j]]=1;
					}
				}
			}
		}
		cout<<guards.size()<<endl;
		for (ll i=0;i<guards.size();i++)
			cout<<guards[i]<<" ";
		cout<<endl;	
	}
}