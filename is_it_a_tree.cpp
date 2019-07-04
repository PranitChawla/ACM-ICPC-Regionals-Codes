#include <bits/stdc++.h>
using namespace std;
void addedge (int u,int v,vector <int> list[])
{
	//cout<<"check1"<<endl;
	list[u].push_back(v);
	list[v].push_back(u);
	return;
}
bool check_connectivity (vector <int> list[],int N)
{
	bool is_visited[N+1];
	for (int i=1;i<=N;i++)
		is_visited[i]=0;
	queue <int> a;
	a.push(1);
	is_visited[1]=1;
	while (!a.empty())
	{
		int temp;
		temp=a.front();
		a.pop();
		vector <int>::iterator it;
		for (it=list[temp].begin();it!=list[temp].end();it++)
		{
			if (is_visited[*it]==0)
			{
				is_visited[*it]=1;
				a.push(*it);
			}
		}
	}
	for (int i=1;i<=N;i++)
	{
		if (is_visited[i]==0)
			return false;
	}
	return true;
}
bool cycle_present (int i,bool is_visited[],vector <int> list[],int parent)
{
	is_visited[i]=1;
	vector <int>::iterator it;
	for (it=list[i].begin();it!=list[i].end();it++)
	{
		if (is_visited[*it]==0)
			if (cycle_present(*it,is_visited,list,i))
				return true;
		else if (*it!=parent)
			return true;
	}
	return false;
}
bool check_cycle (vector <int> list[],int N)
{
	bool is_visited[N+1];
	for (int i=1;i<=N;i++)
		is_visited[i]=0;
	// queue <int> a;
	// a.push(1);
	for (int i=1;i<=N;i++)
	{
		if (is_visited[i]==0)
		{
			if (cycle_present(i,is_visited,list,-1))
				return true;
		}
	}
	return false;
	
}
int main()
{
	int N,M;
	cin>>N>>M;
	vector <int> list[N+1];
	for (int i=0;i<M;i++)
	{
		//cout<<"check"<<endl;
		int u,v;
		cin>>u>>v;
		addedge(u,v,list);
	}
	//cout<<"outside";
	//cout<<check_connectivity(list,N);
	if (check_connectivity(list,N)&&M==N-1)
		cout<<"YES";
	else
		cout<<"NO";
}