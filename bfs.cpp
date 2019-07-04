#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	vector <int> *adjlist;
public:
	graph(int V);
	void edge (int a,int b);
	void BFS(int s);
	void print_graph ();
};
graph::graph(int V)
{
	this->V=V;
	adjlist=new vector <int>[V+1];
}
void graph::edge(int a,int b)
{
	adjlist[a].push_back(b);
	adjlist[b].push_back(a);
}
void graph::print_graph()
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
void graph::BFS(int s)
{
	bool visited[V];
	for (int i=0;i<V;i++)
		visited[i]=0;
	queue <int> list;
	list.push(s);
	visited[s]=1;
	while (list.size()!=0)
	{
		int temp;
		temp=list.front();
		cout<<temp<<endl;
		list.pop();
		vector <int>::iterator it;
		for (it=adjlist[temp].begin();it!=adjlist[temp].end();it++)
		{
			if (visited[*it]==0)
			{
			visited[*it]=1;
			list.push(*it);
			}
		}
	}
}
int main()
{
	graph G(6);
	// G.edge(0,1);
	// G.edge(0,2);
	// G.edge(1,2);
	// G.edge(2,0);
	// G.edge(2,3);
	// G.edge(3,3);
	G.edge(1,3);
	G.edge(1,2);
	G.edge(2,4);
	G.edge(2,5);
	G.edge(3,5);
	G.edge(4,5);
	G.edge(4,6);
	G.edge(5,6);
	//G.print_graph();
	G.BFS(1);
}