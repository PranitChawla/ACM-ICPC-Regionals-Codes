	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
	vector < pair <ll,ll> > v[100005];
	vector <ll> path;
	ll dis[100005];
	ll p[100005];
		stack <ll> s;
		void recur(ll current_vertex)
{
   if(p[current_vertex]==-1)
    return;
   recur(p[current_vertex]);
   path.push_back(current_vertex);
}
	bool dfs (ll n)
	{
		memset(vis,0,sizeof(vis));
		s.push(1);
		while (!s.empty())
		{
			ll t=s.top();
			s.pop();
			for (ll i=0;i<v[t].size();i++)
			{
				if (vis[v[t][i].second]==0)
				{
					vis[v[t][i].second]=1;
					s.push(v[t][i].second);
				}
			}
		}
		if (vis[n]==0)
		{
			return 0;
		}
		else
			return 1;
	}
	int main()
	{
		ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
	  cout.tie(NULL);

		ll n,m;
		cin>>n>>m;
		for (ll i=0;i<m;i++)
		{
			ll a,b,c;
			cin>>a>>b>>c;
			v[a].push_back(make_pair(c,b));
			v[b].push_back(make_pair(c,a));
		}
		for (ll i=1;i<=n;i++)
		{
			dis[i]=INT_MAX;
			p[i]=-1;
		}
		// p[1]=1;
		dis[1]=0;
		 priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >q;
		q.push(make_pair(dis[1],1));
		while (!q.empty())
		{
			pair <ll,ll> p1;
			p1=q.top();
			q.pop();
			ll ind=p1.second;
			ll d=p1.first;
			for (ll i=0;i<v[ind].size();i++)
			{
				if (dis[v[ind][i].second]>d+v[ind][i].first)
				{
					dis[v[ind][i].second]=d+v[ind][i].first;
					p[v[ind][i].second]=ind;
					q.push(make_pair(dis[v[ind][i].second],v[ind][i].second));
				}
			}
		}

	path.push_back(1);
   recur(n);
   if(path[path.size()-1]!=n)
    cout<<-1<<endl;
   else
    for(auto x:path)
      cout<<x<<" ";
    cout<<endl;

	}