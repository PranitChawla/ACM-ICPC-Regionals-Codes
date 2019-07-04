#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	bool is_visited [n];
	memset(is_visited,0,sizeof(is_visited));
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=1;i<=1000;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (a[j]==i)
				is_visited[j]=1;
		}
		if (is_visited[0]==1||is_visited[n-1]==1)
		{
			cout<<i;
			break;
		}
		int flag=0;
		for (int j=0;j<n-1;j++)
		{
			if (is_visited[j]==1&&is_visited[j+1]==1)
				{
					flag=1;
					break;
				}
		}
		if (flag==1)
		{
			cout<<i;
			break;
		}
	}
}