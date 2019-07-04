#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for (int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
	sort(a,a+n);
	int flag=0;
	for (int i=1;i<=n-3;i++)
	{
		if (a[i]!=a[i+1])
		{
			flag=1;
			break;
		}
	}
	if (n==1)
		cout<<"Exemplary pages.";
	else if (n==2)
	{
		if (a[0]==a[1])
			cout<<"Exemplary pages.";
		else if ((a[0]+a[1])%2==0)
		{
			if (b[0]>b[1])
			cout<<(a[1]-a[0])/2<<" ml. from cup #"<<2<<" to cup #"<<1<<".";
			else
				cout<<(a[1]-a[0])/2<<" ml. from cup #"<<1<<" to cup #"<<2<<".";
		}
		else
			cout<<"Unrecoverable configuration.";

	}
	else if (flag==1)
		cout<<"Unrecoverable configuration.";
	else
	{
		if ((a[0]+a[n-1])/2==a[1]&&(a[0]+a[n-1])%2==0)
		{
			if (a[0]==a[1])
				cout<<"Exemplary pages.";
			else
			{
				int d,c;
				for (int i=0;i<n;i++)
				{
					if (b[i]==a[0])
					{
						d=i;
						break;
					}
				}
				for (int i=0;i<n;i++)
				{
					if (b[i]==a[n-1])
					{
						c=i;
						break;
					}
				}
				cout<<a[n-1]-a[n-2]<<" ml. from cup #"<<d+1<<" to cup #"<<c+1<<".";
			}
		}
		else
			cout<<"Unrecoverable configuration.";
	}
}