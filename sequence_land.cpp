#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	int key;
	vector <ll> id;
	ll size;
}data;
vector <data> list1;
vector <data> adj_list[302];
bool is_visited [302];
void bfs (int start,int N)
{
	for (int i=1;i<=N;i++)
	{
		is_visited[i]=0;
	}
	queue <int> q;
	is_visited[start]=1;
	q.push(start);
	while (!q.empty())
	{
		int temp;
		temp=q.front();
		q.pop();
		vector <data>::iterator it;
		for (it=adj_list[temp].begin();it!=adj_list[temp].end();it++)
		{
			data t;
			t=*it;
			if (is_visited[t.key]==0)
			{
				is_visited[t.key]=1;
				q.push(t.key);
			}
		}
	}
}
void add_edge (data a,data b)
{
	adj_list[a.key].push_back(b);
	adj_list[b.key].push_back(a);
}
bool check_edge (data a, data b,int K)
{
	vector <ll>::iterator it;
	vector <ll>::iterator it2;
	sort(a.id.begin(),a.id.end());
	sort(b.id.begin(),b.id.end());
	ll count=0;
	// for (it=a.id.begin();it!=a.id.end();it++)
	// {
	// 	for (it2=b.id.begin();it2!=b.id.end();it2++)
	// 	{
	// 		if (*it==*it2)
	// 			count++;
	// 	}
	// }
	it=a.id.begin();
	it2=b.id.begin();
	while (it!=a.id.end()&&it2!=b.id.end())
	{
		if (*it>*it2)
			it2++;
		else if (*it<*it2)
			it++;
		else
		{
			count++;
			it++;
			it2++;
		}
	}
	if (count>=K)
		return true;
	else
		return false;
}
int main()
{
	int N,K;
	cin>>N>>K;
	for (int i=1;i<=N;i++)
	{
		data temp;
		temp.key=i;
		ll a,b;
		cin>>a;
		temp.size=a;
		for (ll i=0;i<a;i++)
		{
			cin>>b;
			temp.id.push_back(b);
		}
		list1.push_back(temp);
	}
	vector <data>::iterator it;
	vector <data>::iterator it2;
	for (it=list1.begin();it!=list1.end();it++)
	{
		for (it2=it+1;it2!=list1.end();it2++)
		{
			if (check_edge(*it,*it2,K))
				add_edge(*it,*it2);
		}
	}
	bfs(1,N);
	int count=0;
	for (int i=1;i<=N;i++)
	{
		if (is_visited[i]==1)
			count++;

	}
	cout<<count;
}