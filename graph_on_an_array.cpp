#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29,31, 37, 41, 43, 47};
	while (t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for (int i=0;i<n;i++)
			cin>>a[i];
		if (n==1)
		{
			cout<<0<<endl;
			cout<<a[0]<<endl;
			continue;
		}
		int f=0;
		int count=0;
		for (int i=0;i<n;i++)
		{
			int g=0;
			for (int j=0;j<n;j++)
			{
				if (i!=j)
				{
					if (__gcd(a[i],a[j])==1)
						{
							g=1;
							break;
						}
				}

			}
			if (g==1)
				count++;
		}
		if (count==n)
		{
			cout<<0<<endl;
			for (int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
		else
		{
			int p=0;
			for (int i=0;i<n-1;i++)
			{
				if (a[i]!=a[i+1])
				{
					p=1;
					break;
				}
			}
			if (p==1)
			{
				cout<<1<<endl;
				cout<<47<<" ";
				for (int i=1;i<n;i++)
					cout<<a[i]<<" ";
				cout<<endl;
			}
			else
			{
				int r=a[0];
				int p2;
				for (int i=14;i>=0;i--)
				{
					if (primes[i]!=r)
					{
						p2=primes[i];
						break;
					}
				}
				cout<<1<<endl;
				cout<<p2<<" ";
				for (int i=1;i<n;i++)
					cout<<a[i]<<" ";
				cout<<endl;
			}
		}
	}
}