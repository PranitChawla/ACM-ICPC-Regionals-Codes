#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	int i;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	i=1;
	while (i<n&&a[i]+1==a[i+1])
		i++;
	// if (i==n-1&&n!=2)
	// 	cout<<0<<" "<<0;
	// else
	// {
	int flag=0;
	for (int i=1;i<n;i++)
	{
		if (a[i+1]<a[i])
		{
			flag=1;
			break;
		}
	}
	if (flag==0)
		cout<<0<<" "<<0;
	else 
	{
		if (a[i]<a[i+1])
		i++;
		int l,r;
		l=i;
		while (a[i]-1==a[i+1]&&i<n)
			i++;
		r=i;
		//cout<<l<<" "<<r<<endl;
		if (a[r]!=l)
		{
			//cout<<"f";
			cout<<0<<" "<<0;
		}
		else if (a[l]!=r)
		{
			//cout<<"s";
			cout<<0<<" "<<0;
		}
		else
		{
			for (int i=a[l]+1;i<n;i++)
			{
				if (a[i]+1!=a[i+1])
				{
					//cout<<"t";
					cout<<0<<" "<<0;
					return 0;
				}
			}
				cout<<l<<" "<<r;
		}
	}

}
