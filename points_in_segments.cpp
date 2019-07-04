#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	bool visit[m+1];
	for (int i=1;i<=m;i++)
		visit[i]=0;
	for (int i=0;i<n;i++)
	{
		int l,r;
		cin>>l>>r;
		for (int i=l;i<=r;i++)
		{
			visit[i]=1;
		}
	}
	int count=0;
	for (int i=1;i<=m;i++)
	{
		if (visit[i]==0)
			count++;
	}
	cout<<count<<endl;
	for (int i=1;i<=m;i++)
	{
		if (visit[i]==0)
			cout<<i<<" ";
	}
}