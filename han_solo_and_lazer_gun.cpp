#include <bits/stdc++.h>
using namespace std;
bool finished (bool is_visited[],int n)
{
	for (int i=0;i<n;i++)
		if (is_visited[i]==0)
			return false;
	return true;
}
bool colinear (pair <int,int> a, pair <int,int> b, pair <int,int> c)
{
	int val;
	val=a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
	//cout<<val<<endl;
	if (val==0)
		return true;
	else 
		return false;
}
int main()
{
	int n;
	cin>>n;
	pair <int,int> gun;
	cin>>gun.first>>gun.second;
	vector < pair <int,int> > list;
	for (int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		list.push_back(make_pair(a,b));
	}
	bool is_visited[n];
	memset(is_visited,0,sizeof(is_visited));
	int count=0;
	//cout<<colinear(gun,list[0],list[1]);
	for (int i=0;i<n;i++)
	{
		if (is_visited[i]==0)
		{
		is_visited[i]=1;
		count++;
		if (finished(is_visited,n))
			break;
		for (int j=i+1;j<n;j++)
		{
			if (colinear(gun,list[i],list[j])&&is_visited[j]==0)
			{
				//cout<<"killed "<<i<<endl;
				is_visited[j]=1;
			}
		}
		//count++;
		if (finished(is_visited,n))
			break;
		}
	}
	cout<<count;
}