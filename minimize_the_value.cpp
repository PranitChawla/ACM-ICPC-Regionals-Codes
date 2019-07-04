#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[100004];
ll vis[100004];
ll val[100004];
ll sum[100004];
ll dfs(ll node)
{
	vis[node]=1;
	sum[node]=val[node];
	for (ll i=0;i<v[node].size();i++)
	{
		if (!vis[v[node][i]])
		{
			sum[node]=sum[node]+dfs(v[node][i]);
		}
	}
	return sum[node];
}
int main()
{
	memset(vis,0,sizeof(vis));
	memset(sum,0,sizeof(sum));
	ll n,x;
	cin>>n>>x;
	for (ll i=1;i<=n;i++)
		cin>>val[i];
	for (ll i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ll s=dfs(1);
	for (ll i=1;i<=n;i++)
		cout<<sum[i]<<" "; 
}