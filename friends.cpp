#include <bits/stdc++.h>
using namespace std;
vector <int> adj_list[6];
vector <int> n_adj[6];
void add_adge (int a,int b)
{
	adj_list[a].push_back(b);
	adj_list[b].push_back(a);
}
void add_edge2 (int a,int b)
{
	n_adj[a].push_back(b);
	//n_adj[b].push_back(a);
}
int main()
{
 	int m;
 	cin>>m;
 	for (int i=0;i<m;i++)
 	{
 		int a,b;
 		cin>>a>>b;
 		add_adge(a,b);
 	}
 	vector <int>::iterator it,it2,it3,it4;
 	int flag=0;
 	for (int i=1;i<=5;i++)
 	{
 		for (it=adj_list[i].begin();it!=adj_list[i].end();it++)
 		{
 			for (it2=it+1;it2!=adj_list[i].end();it2++)
 			{
 				for (it3=adj_list[*it].begin();it3!=adj_list[*it].end();it3++)
 				{
 					if (*it3==*it2)
 					{
 						cout<<"WIN";
 						flag=1;
 						exit(0);
 					}

 				}
 			}
 		}
 	}
 		for (int i=1;i<=5;i++)
 		{
 			for (int j=1;j<=5;j++)
 			{
 				if (j!=i)
 				{
 					int flag=0;
 					for (it=adj_list[i].begin();it!=adj_list[i].end();it++)
 					{
 						if (*it==j)
 						{
 							flag=1;
 							break;
 						}
 					}
 					if (flag==0)
 						add_edge2(i,j);
 				}
 			}
 		}
 		// for (int i=1;i<=5;i++)
 		// {
 		// 	for (it=n_adj[i].begin();it!=n_adj[i].end();it++)
 		// 		cout<<*it<<" ";
 		// 	cout<<endl;
 		// }
 		int a;
 		for (int i=1;i<=5;i++)
 	{
 		flag=0;
 		for (it=n_adj[i].begin();it!=n_adj[i].end();it++)
 		{
 			for (it2=it+1;it2!=n_adj[i].end();it2++)
 			{
 				for (it3=n_adj[*it].begin();it3!=n_adj[*it].end();it3++)
 				{
 					//cout<<*it3<<" "<<*it2<<endl;
 					if (*it3==*it2)
 					{
 						cout<<"WIN";
 						flag=1;
 						exit(0);
 					}

 				}
 			}
 		}
 	}
 	//cout<<flag<<endl;
 		cout<<"FAIL";
}