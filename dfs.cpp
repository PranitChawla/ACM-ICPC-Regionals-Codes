#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	vector <int> *adjlist;
	bool *visited_recur;
public:
	graph(int V);
	void edge (int a,int b);
	void DFS(int s);
	void DFS_recursion(int s);
	void print_graph ();
};
graph::graph(int V)
{
	this->V=V;
	adjlist=new vector <int>[V+1];
	visited_recur=new bool [V];
	for (int i=0;i<V;i++)
		visited_recur[i]=0;
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
// void graph::DFS(int s)
// {
// 	stack <int> list;
// 	list.push(s);
// 	visited[s]=1;
// 	while (list.size()!=0)
// 	{
// 		int temp;
// 		temp=list.top();
// 		cout<<temp<<endl;
// 		list.pop();
// 		vector <int>::iterator it;
// 		for (it=adjlist[temp].begin();it!=adjlist[temp].end();it++)
// 		{
// 			if (visited[*it]==0)
// 			{
// 			visited[*it]=1;
// 			list.push(*it);
// 			}
// 		}
// 	}
// }
void graph::DFS_recursion (int s)
{
	cout<<s<<endl;
	visited_recur[s]=1;
	vector <int>::iterator it;
	for (it=adjlist[s].begin();it!=adjlist[s].end();it++)
	{
		if (visited_recur[*it]==0)
		{
		DFS_recursion(*it);
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
	G.DFS_recursion(1);
}