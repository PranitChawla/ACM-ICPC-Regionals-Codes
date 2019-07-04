#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int d;
	cin>>n>>m>>d;
	int a[n+1][m+1];
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
			cin>>a[i][j];
	int flag=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			for (int k=1;k<=n;k++)
			{
				for (int l=1;l<=m;l++)
				{
					if (abs(a[k][l]-a[i][j])%d!=0)
						flag=1;
				}
			}
		}
	}
	if (flag==1)
		cout<<-1;
	else
	{
		int count[n+1][m+1];
		for (int i=1;i<=n;i++)
		{
		for (int j=1;j<=m;j++)
		{
			int c=0;
			for (int k=1;k<=n;k++)
			{
				for (int l=1;l<=m;l++)
				{
					c+=(abs(a[k][l]-a[i][j])/d);
				}
			}
			count[i][j]=c;
		}
		}
		int min=count[1][1];
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++)
				if (count[i][j]<min)
					min=count[i][j];
		cout<<min;
	}
}
