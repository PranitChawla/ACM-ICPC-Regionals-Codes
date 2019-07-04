#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	double w[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			cin>>w[i][j];
	}
	double a[n][n];
	double b[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			a[i][j]=((double)w[i][j]+(double)w[j][i])/(double)2;
			b[i][j]=((double)w[i][j]-(double)w[j][i])/(double)2;
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%0.9f",a[i][j]);
			cout<<" ";
		}
		cout<<endl;
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%0.9f",b[i][j]);
			cout<<" ";
		}
		cout<<endl;
	}

}