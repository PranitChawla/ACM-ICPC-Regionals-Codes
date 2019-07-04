#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> adj_list[100002];
ll root (ll arr[], ll a)
{
	while (arr[a]!=a)
		a=arr[a];
	return a;
}
bool find (ll a, ll b,ll arr[])
{
	ll root_a=root(arr,a);
	ll root_b=root(arr,b);
	if (root_a==root_b)
		return true;
	else 
		return false;
}
void weighted_union (ll arr[], ll size[],ll a,ll b)
{
	ll root_a=root(arr,a);
	ll root_b=root(arr,b);
	if (size[root_a]<size[root_b])
	{
		arr[root_a]=arr[root_b];
		size[root_b]+=size[root_a];
	}
	else
	{
		arr[root_b]=arr[root_a];
		size[root_a]+=size[root_b];
	}
}
void add_edge (ll x,ll y)
{
	adj_list[x].push_back(y);
	adj_list[y].push_back(x);
}
bool bfs (ll x,ll y,ll N)
{
	bool is_visited [N+1];
	for (int i=1;i<=N;i++)
		is_visited[i]=0;
	is_visited[x]=1;
	queue <ll> list;
	list.push(x);
	while (!list.empty())
	{
		ll temp;
		temp=list.front();
		list.pop();
		vector <ll>::iterator it;
		for (it=adj_list[temp].begin();it!=adj_list[temp].end();it++)
		{
			if (is_visited[*it]==0)
			{
				is_visited[*it]=1;
				list.push(*it);
			}
		}
	}
	if (is_visited[y]==1)
		return true;
	else 
		return false;
}
int main()
{
	ll N,Q;
	cin>>N;
	cin>>Q;
	ll size=pow(10,5)+1;
	ll arr[size];
	ll cost[size];
	for (ll i=1;i<=size;i++)
		arr[i]=i;
	for (ll i=1;i<=size;i++)
		cost[i]=1;
	for (ll i=0;i<Q;i++)
	{
		int a;
		cin>>a;
		if (a==0)
		{
			ll x,y;
			cin>>x>>y;
			weighted_union(arr,cost,x,y);
		}
		else
		{
			ll x,y;
			cin>>x>>y;
			if (find(x,y,arr))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}