#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int B[n+1][m+1];
	int A[n+1][m+1];
	int count_r[n+1];
	int count_c[m+1];
	for (int i=1;i<=n;i++)
		count_r[i]=0;
	for (int i=1;i<=m;i++)
		count_c[i]=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
			cin>>B[i][j];
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
			A[i][j]=1;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (B[i][j]==0)
			{
				for (int k=1;k<=n;k++)
					A[k][j]=0;
				for (int k=1;k<=m;k++)
					A[i][k]=0;
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (A[i][j]==1)
			{
				count_r[i]++;
				count_c[j]++;
			}
		}
	}
	int flag=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (B[i][j]==1)
			{
				if (count_r[i]<1&&count_c[j]<1)
				{
					flag=1;
					break;
				}

			}
		}
	}
	if (flag==1)
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	}
}