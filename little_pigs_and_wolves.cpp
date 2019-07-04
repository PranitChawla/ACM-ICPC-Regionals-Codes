#include <bits/stdc++.h>
using namespace std;
bool isvalid (int i,int j,int n,int m)
{
	if (i<0||j<0||i>n-1||j>m-1)
		return false;
	return true;
}
int main()
{
	int n,m;
	cin>>n>>m;
	char a[n][m];
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			cin>>a[i][j];
	bool pigs[n][m];
	bool wolves[n][m];
	int count=0;
	memset(pigs,0,sizeof(pigs));
	memset(wolves,0,sizeof(wolves));
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (a[i][j]=='W')
				if ((isvalid(i+1,j,n,m)&&a[i+1][j]=='P')||(isvalid(i-1,j,n,m)&&a[i-1][j]=='P')||(isvalid(i,j+1,n,m)&&a[i][j+1]=='P')||(isvalid(i,j-1,n,m)&&a[i][j-1]=='P'))
					count++;
		}
	}
	cout<<count;
}