#include <bits/stdc++.h>
using namespace std;
bool fin (int a[],int k,int n)
{
	for (int i=0;i<n;i++)
	{
		if (a[i]<k)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int flag=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]<k)
		flag=1;
	}

	int i=0;
	int tot=0;
	if (flag==0)
		cout<<0;
	else if (n==1)
		cout<<k-n;
	else
	{
	while (1)
	{
		i=0;
	while (i<n-1)
	{
		if (a[i]!=a[i+1])
		{
			if (a[i]<k)
				a[i]++;
		}
		i++;
	}
	sort(a,a+n);
	tot++;
	flag=0;
	for (int i=0;i<n;i++)
		{
		if (a[i]<k)
		{
			flag=1;
			break;
		}
		}
		if (flag==0)
			break;
	}
	cout<<tot;
}
}