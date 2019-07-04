#include <bits/stdc++.h>
using namespace std;
void add_egde (int a,int b,vector <int> adj_list[])
{
	adj_list[a].push_back(b);
	adj_list[b].push_back(a);
}
bool is_one (vector <int> adj_list[],int a)
{
	vector <int>::iterator it;
	int count=0;
	for (it=adj_list[a].begin();it!=adj_list[a].end();it++)
	{
		if (*it>0)
			count++;
	}
	if (count==1)
		return true;
	else 
		return false;
}
int main()
{	
	int n,m;
	cin>>n>>m;
	vector <int> adj_list[n+1];
	for (int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		add_egde(a,b,adj_list);
	}
	int count=0;
	vector <int>::iterator it;
	vector <int> list;
	// adj_list[6].push_back(1);
	// adj_list[6].erase(adj_list[6].begin());
	// cout<<adj_list[6].size()<<endl;
	//cout<<adj_list[5].size()<<endl;
	while (1)
	{
		int flag=0;
	for (int i=1;i<=n;i++)
	{
		//cout<<adj_list[i].size()<<endl;
		if (is_one(adj_list,i))
		{
			list.push_back(i);

			flag=1;
		}
	}
	for (it=list.begin();it!=list.end();it++)
	{
		int a=*it;
		vector <int>::iterator it2;
		int b;
		for (it2=adj_list[a].begin();it2!=adj_list[a].end();it2++)
		{
			if (*it2!=0)
			{
				b=*it2;
				*it2=0;
			}
		}
		for (it2=adj_list[b].begin();it2!=adj_list[b].end();it2++)
		{
			if (*it2==a)
			{
				*it2=0;
			}
		}
		
	}
	if (flag==0)
		break;
	else
		count++;
	}
	cout<<count;
}