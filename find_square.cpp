#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string s;
	int a[n+1][m+1];
	memset(a,0,sizeof(a));
	for (int i=1;i<=n;i++)
	{
		cin>>s;
		for (int j=1;j<=m;j++)
		{
			if (s[j-1]=='W')
				a[i][j]=0;
			else
				a[i][j]=1;
		}
	}
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			//cout<<a[i][j]<<" ";
			if (a[i][j])
				sum++;
		}
		//cout<<endl;
	}
	int len=sqrt(sum);
	//cout<<len;
	int i,j;
	int flag=0;
	for (i=1;i<=n;i++)
	{
		flag=0;
		for (j=1;j<=m;j++)
	{
			if (a[i][j])
			{
				flag=1;
				break;
			}
	}
	if (flag==1)
		break;
	}
	// cout<<i<<" "<<j;
	cout<<i+len/2<<" ";
	cout<<j+len/2;
}