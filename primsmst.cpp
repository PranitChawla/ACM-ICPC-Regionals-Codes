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
int main()
{
	
}