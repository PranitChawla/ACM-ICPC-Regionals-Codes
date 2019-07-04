#include <bits/stdc++.h>
#include <tuple>
using namespace std;
typedef long long int ll;
void add_edge (tuple <ll,ll,ll> a,tuple <ll,ll,ll> b,vector <ll> adj_list[])
{
	//cout<<get<0>(a)<<" "<<get<0>(b)<<" "<<endl;
	adj_list[get<0>(a)].push_back(get<0>(b));
	//adj_list[get<0>(b)].push_back(get<0>(a));	
}
bool bfs (vector <ll> adj_list[],int start,int end)
{
	bool is_visited [101];
	memset(is_visited,0,sizeof(is_visited));
	is_visited[start]=1;
	queue <ll> pq;
	pq.push(start);
	vector <ll>::iterator it;
	while (pq.size()>0)
	{
		ll temp;
		temp=pq.front();
		pq.pop();
		for (it=adj_list[temp].begin();it!=adj_list[temp].end();it++)
		{
			// cout<<*it<<" ";
			if (is_visited[*it]==0)
			{
				is_visited[*it]=1;
				pq.push(*it);
			}
		}
		//cout<<endl;
	}
	// for (int i=1;i<=count;i++)
	// 	cout<<is_visited[i]<<" ";
	//cout<<endl;
	if (is_visited[end]==1)
		return true;
	else
		return false;
}
bool check (tuple <ll,ll,ll> a,tuple <ll,ll,ll> b)
{
	ll l1,r1,l2,r2;
	l1=get<1>(a);
	r1=get<2>(a);
	l2=get<1>(b);
	r2=get<2>(b);
	//||l2>l1&&l2<r1||r2>l1&&r2<r1
	if (l1>l2&&l1<r2||r1>l2&&r1<r2)
		return true;
	return false;
}
int main()
{
	int n;
	cin>>n;
	vector < tuple <ll,ll,ll> > list;
	vector <ll> adj_list[101];
	vector < tuple <ll,ll,ll> >::iterator it,it2;
	int count=1;
	for (int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if (a==1)
		{
			ll x,y;
			cin>>x>>y;
			list.push_back(make_tuple(count,x,y));
			count++;
			// cout<<count;
			// cout<<endl;
			for (it=list.begin();it!=list.end();it++)
			{
			for (it2=it+1;it2!=list.end();it2++)
			{
			if (check(*it,*it2))
			{
				//cout<<"check"<<endl;
				add_edge(*it,*it2,adj_list);
			}
			if (check(*it2,*it))
				add_edge(*it2,*it,adj_list);
			}
		}
		}
		else 
		{
			int x,y;
			cin>>x>>y;
			if (bfs(adj_list,x,y))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
			//queries.push_back(make_pair(x,y));
		}
	}	
}