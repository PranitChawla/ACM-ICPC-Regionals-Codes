#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[300004];
ll vis[300004];
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	memset(vis,0,sizeof(vis));
	vis[1]=1;
	stack <ll> s;
	ll b[n+1];
	ll r[n+1];
	memset(b,0,sizeof(b));
	memset(r,0,sizeof(r));
	if (a[1]==1)
		r[1]=1;
	if (a[1]==2)
		b[1]=1;
	s.push(1);
	while(!s.empty())
	{
		ll t=s.top();
		s.pop();
		for (ll i=0;i<v[t].size();i++)
		{
			if (!vis[v[t][i]])
			{
				if (a[t]==1)
				{
					r[v[t][i]]=r[t]+1;
				}
				if (a[t]==2)
				{
					b[v[t][i]]=b[t]+1;
				}
				vis[v[t][i]]=1;
				s.push(v[t][i]);
			}
		}
	}

}