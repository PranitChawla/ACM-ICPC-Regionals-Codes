#include <bits/stdc++.h>
using namespace std;
void addedge (vector <int> adjlist[],int u,int v)
{
	adjlist[u].push_back(v);
	adjlist[v].push_back(u);
}
void print_graph (vector <int> adjlist[],int V)
{
	vector <int>::iterator it;
	for (int i=0;i<V;i++)
	{
		cout<<"the list of vertex "<<i<<"is ";
		cout<<endl;
		for (it=adjlist[i].begin();it!=adjlist[i].end();it++)
			cout<<*it<<"->";
		cout<<endl;
	}
}
int main()
{
	int V=5;
	vector <int> adjlist[V];
	addedge(adjlist,0,1);
	addedge(adjlist,1,3);
	addedge(adjlist,3,4);
	addedge(adjlist,0,4);
	addedge(adjlist,1,4);
	addedge(adjlist,2,3);
	addedge(adjlist,1,2);
	print_graph(adjlist,V);
}