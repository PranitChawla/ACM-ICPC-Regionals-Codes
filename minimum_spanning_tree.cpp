#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct compare
{
    bool operator()(pair<ll,ll> p1,pair<ll,ll> p2) {
        return (p1.first>p2.first);  
    }
};
bool comp (ll a,ll b)
{
	return (a>b);
}
vector < pair <ll,ll> > v[1000004];
vector <ll> edges;
bool visited [1000004];
bool visb [1000004];
void bfs (ll node)
{
	visb[node]=1;
	queue <ll> q;
	q.push(node);
	while (!q.empty())
	{
		ll p=q.front();
		q.pop();
		for (ll i=0;i<v[p].size();i++)
		{
			if (!visb[v[p][i].second])
			{
				visb[v[p][i].second]=1;
				q.push(v[p][i].second);
			}
		}
	}
}
ll minspantree (ll node)
{
	priority_queue <pair <ll,ll>, vector < pair <ll,ll> > , compare > q;
	q.push(make_pair(0,node));
	ll ans=0;
	while (!q.empty())
	{
		pair <ll,ll> p;
		p=q.top();
		q.pop();
		if (visited[p.second])
			continue;
		ans+=p.first;
		if (p.first!=0)
			edges.push_back(p.first);
		visited[p.second]=1;
		for (ll i=0;i<v[p.second].size();i++)
		{
			ll ind=v[p.second][i].second;
			if (!visited[ind])
			{
				q.push(v[p.second][i]);
			}
		}
	}
	return ans;
}
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	memset(visited,0,sizeof(visited));
	memset(visb,0,sizeof(visb));
	for (ll i=0;i<m;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		v[a].push_back(make_pair(c,b));
		v[b].push_back(make_pair(c,a));
	}
	bfs(1);
	int g=0;
	for (ll i=1;i<=n;i++)
	{
		if (visb[i]==0)
		{
			g=1;
			break;
		}
	}
	if (g)
	{
		cout<<-1<<endl;
		exit(0);
	}
	ll res=minspantree(1);
	for (ll i=0;i<edges.size();i++)
	{
		
		edges[i]=edges[i]-1;
	}
	sort(edges.begin(),edges.end(),comp);
	res=res-k;
	if (res<=0)
		cout<<0<<endl;
	else 
	{
		ll c=0;
		ll i=0;
		int f=0;
		while (i<edges.size())
		{
			res=res-edges[i];
			i++;
			c++;
			if (res<=0)
			{
				f=1;
				break;
			}
		}
		if (f)
			cout<<c;
		else
			cout<<-1;
	}
}