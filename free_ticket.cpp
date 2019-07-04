#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector < pair <int,int> > adj_list[231];
bool operator < (pair <int,int> a,pair <int,int> b)
{
	return (a.first>b.first);
}
void add_edge (int x,int y,int cost)
{
	pair <int,int> temp;
	temp.first=cost;
	temp.second=y;
	adj_list[x].push_back(temp);
	//pair <int,int> temp;
	temp.first=cost;
	temp.second=x;
	adj_list[y].push_back(temp);
}
bool is_visited [231];
int shortest_path[231];
int main()
{
	int C,F;
	cin>>C>>F;
	for (int i=0;i<F;i++)
	{
		int x,y;
		ll cost;
		cin>>x>>y>>cost;
		add_edge(x,y,cost);
	}
	int max,max_temp;
	for (int j=1;j<=C;j++)
	{
	for (int i=1;i<=C;i++)
		shortest_path[i]=INT_MAX;
	shortest_path[j]=0;
	priority_queue < pair <int,int> > list;
	list.push(pair <int,int> (shortest_path[j],j));
	//list.push(pair <int,int> (2,2));
	//cout<<list.top().first;
	vector < pair <int,int> >::iterator it;
	while (!list.empty())
	{
		pair <int,int> temp;
		temp=list.top();
		list.pop();
	for (it=adj_list[temp.second].begin();it!=adj_list[temp.second].end();it++)
	{
		pair <int,int> t;
		t=*it;
		if (shortest_path[temp.second]+t.first<shortest_path[t.second])
		{
			shortest_path[t.second]=shortest_path[temp.second]+t.first;
			list.push(pair <int,int> (shortest_path[t.second],t.second));
		}
	}
	}
	max_temp=shortest_path[1];
	for (int i=1;i<=C;i++)
	{
		if (shortest_path[i]>max_temp)
			max_temp=shortest_path[i];
	}
	if (j==1)
	{
		max=max_temp;
	}
	else
	{
		if (max_temp>max)
			max=max_temp;
	}
	}
	cout<<max;
}