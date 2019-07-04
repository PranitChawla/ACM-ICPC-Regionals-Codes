#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Compare {
	public: bool operator()(pair< pair< ll, ll> ,ll > a, pair< pair< ll, ll> ,ll > b);
};

bool Compare::operator()(pair< pair< ll, ll> ,ll > a, pair< pair< ll, ll> ,ll > b) {
	return((a.first).first>(b.first).first);
}
int main()
{
	ll n, m;
	cin>>n>>m;
	vector < pair<ll,ll> > adj[n+1];

	for(ll i=0;i<m;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(c,b));
		adj[b].push_back(make_pair(c,a));
	}
	ll parent[n+1];
	ll vis[n+1];
	memset(vis,0,sizeof(vis));
	memset(parent,0,sizeof(parent));
	parent[1]=-1;
	priority_queue < pair< pair<ll,ll>, ll>, vector<pair< pair<ll,ll>, ll> >, Compare > q;
	q.push(make_pair(make_pair(0,1),-1));
	while(!q.empty())
	{
		pair< pair<ll,ll> ,ll> curr=q.top();
		q.pop();

		if(vis[(curr.first).second]==1)
			continue;

		vis[(curr.first).second]=1;
		parent[(curr.first).second]=curr.second;
		for(ll i=0;i<adj[(curr.first).second].size();i++)
		{
			if(vis[adj[(curr.first).second][i].second]==0)
			{
				ll cost= (curr.first).first+adj[(curr.first).second][i].first;
				ll parent=(curr.first).second;
				ll child=adj[(curr.first).second][i].second;
				q.push(make_pair(make_pair(cost,child),parent));
			}
		}

	}

	if(parent[n]==0)
	{
		cout<<-1<<endl;
		exit(0);
	}
	ll p=n;
	stack <ll> path;
	while(p!=-1)
	{
		path.push(p);
		p=parent[p];
	}

	while(!path.empty())
	{
		cout<<path.top()<<" ";
		path.pop();
	}


}