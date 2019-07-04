#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Compare {
	public: bool operator()(pair< pair< ll, ll> ,ll > a, pair< pair< ll, ll> ,ll > b);
};

bool Compare::operator()(pair< pair< ll, ll> ,ll > a, pair< pair< ll, ll> ,ll > b) {
	return((a.first).first>(b.first).first);
}

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vector< pair< pair< ll, ll> ,ll > > adj[n+1];
	ll count=0;
	for(ll i=0;i<m;i++)
	{
		ll a, b, c;
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(make_pair(c,b),i+1));
		adj[b].push_back(make_pair(make_pair(c,a),i+1));
	}
	ll vis[n+1];
	for(ll i=1;i<=n;i++)
		vis[i]=0;
	vector <ll> edges;
	priority_queue < pair< pair<ll,ll> ,ll>, vector< pair< pair<ll,ll> , ll> >, Compare> q;
	q.push(make_pair(make_pair(0,1),-1));
	while(!q.empty())
	{
		pair< pair<ll,ll>, ll>  curr=q.top();
		q.pop();
		//cout<<(curr.first).first<<endl;

		if(vis[(curr.first).second]==1)
			continue;
		count++;
		vis[(curr.first).second]=1;
		edges.push_back(curr.second);
		for(ll i=0;i<adj[(curr.first).second].size();i++)
		{
			if(!vis[(adj[(curr.first).second][i].first).second])
			adj[(curr.first).second][i].first.first+=(curr.first).first;	
			q.push(adj[(curr.first).second][i]);
		}
		if(count>k)
			break;
	}	
	ll cou=0;
	cout<<edges.size()-1<<endl;
	for(ll i=1;i<edges.size();i++)
		cout<<edges[i]<<" ";	
	// if(edges.size()-1<=k)
	// 	cou=edges.size()-1;
	// else
	// 	cou=k;
	// cout<<cou<<endl;
	// for(ll i=1;i<=cou;i++)
	// {
	// 	cout<<edges[i]<<" ";
	// }
	cout<<endl;

}
