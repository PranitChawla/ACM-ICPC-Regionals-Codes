#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int N,M;
		cin>>N>>M;
		int A[N+1][M+1];
		int move[N+1][M+1];
		for (int i=1;i<=N;i++)
			for (int j=1;j<=M;j++)
				move[i][j]=0;
		string a[N+1];
		for (int i=1;i<=N;i++)
			cin>>a[i];
		string::iterator it;
		int count=0;
		for (int i=1;i<=N;i++)
		{
			int j=1;
			for (it=a[i].begin();it!=a[i].end();it++)
			{
				A[i][j]=*it-48;
				if (A[i][j]==1)
					count++;
				j++;
			}
		}
		int flag=0;
		if (count==0)
		{
			flag=1;
			for (int i=1;i<=N;i++)
			{
				for (int j=1;j<=M;j++)
				{
					cout<<-1<<" ";
				}
				cout<<endl;
			}
			//continue;
		}
		if (flag==0)
		{
		for (int i=1;i<=N;i++)
		{
			for (int j=1;j<=M;j++)
			{
				int flag1=0;
				int flag2=0;
				if (A[i][j]==1)
					move[i][j]=0;
				else 
				{
					for (int k=1;k<=N;k++)
					{
						if (A[k][j]==1)
						{
							flag1=1;
							move[i][j]=1;
							break;
						}
					}
					if (flag1==0)
					{
					for (int k=1;k<=M;k++)
					{	
						if (A[i][k]==1)
						{
							flag2=1;
							move[i][j]=1;
							break;
						}
					}
					if (flag1==0&&flag2==0)
					{
						if (count>0)
							move[i][j]=2;
					}
					}
				}
			}
		}
		for (int i=1;i<=N;i++)
		{
			for (int j=1;j<=M;j++)
			{
				if (j==M)
					cout<<move[i][j];
				else
					cout<<move[i][j]<<" ";
			}
			cout<<endl;
		}
		}
	}
}