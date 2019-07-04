#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int z=0;
	for (int i=0;i<n;i++)
		{
			cin>>a[i];
			if (a[i]==0)
				z++;
		}
			sort(a,a+n);
			for (int i=0;i<n;i++)
				cout<<a[i]<<" ";
		if (!z)
		{
		int in=n-1;
		int piles=0;
		int fl=0;
		while (in>=0)
		{
			int temp;
			temp=a[in];
			in=in-1-temp;
			piles++;
			if (in<=0)
			{
				break;
			}
		}
		cout<<piles;
		}
		else
		{
			int k=0;
			for (int i=0;i<n;i++)
			{
				if (a[i]!=0)
				b[k++]=a[i];
			}
			int in=k-1;
		int piles=0;
		int fl=0;
		while (in>=0)
		{
			int temp;
			temp=b[in];
			in=in-1-temp;
			piles++;
			if (in<0)
			{
				break;
			}
		}
		if (z==n)
			cout<<z;
		else
		cout<<z-1+piles;
		}

		
}