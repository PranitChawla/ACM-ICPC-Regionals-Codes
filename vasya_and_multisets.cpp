#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int f[101];
	memset(f,0,sizeof(f));
	int fl=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		f[a[i]]++;
		if (f[a[i]]>=3)
			fl=1;
	}
	int nice=0;
	int pa=0;
	for (int i=0;i<n;i++)
	{
		if (f[a[i]]==1)
			nice++;
		else if (f[a[i]]==2)
			pa++;
	}
	// for (int i=1;i<=n;i++)
	// 	cout<<f[i]<<" ";
	// cout<<endl;
	// cout<<nice<<endl;
	if (nice%2==0)
	{
		cout<<"YES"<<endl;
		int c=0;
		for (int i=0;i<n;i++)
		{
			if (f[a[i]]==1)
			{
				if (c%2==0)
				{
					cout<<'A';
					c++;
				}
				else
				{
					cout<<'B';
					c++;
				}
			}	
			else
			{
				cout<<'A';
			}
		}
	}
	else
	{
		if (fl==0)
			cout<<"NO";
		else
		{
			cout<<"YES"<<endl;
			int c=0;
			int fl=0;
			for (int i=0;i<n;i++)
			{
				if (f[a[i]]==2)
					cout<<'A';
				else if (f[a[i]]==1)
				{
					if (c%2)
					{
						cout<<'B';
						c++;
					}
					else
					{
						cout<<'A';
						c++;
					}
				}
				else
				{
					if (f[a[i]]>=3&&fl==0)
					{
						cout<<'B';
						f[a[i]]=2;
						fl=1;
					}
					else 
					{
						cout<<'A';
					}
				}
			}
		}
	}
}