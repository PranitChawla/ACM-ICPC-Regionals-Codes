#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++)
			cin>>a[i];
		int l[n];
		int d[n];
		memset(l,0,sizeof(l));
		memset(d,0,sizeof(d));
		l[0]=1;
		for (int i=1;i<n;i++)
		{
			for (int j=0;j<i;j++)
			{
				if (a[j]<a[i]&&l[j]>l[i])
					l[i]=l[j];
			}
			l[i]++;
		}
		d[n-1]=1;
		for (int i=n-2;i>=0;i--)
		{
			for (int j=n-1;j>i;j--)
			{
				if (a[j]<a[i]&&d[j]>d[i])
					d[i]=d[j];
			}
			d[i]++;
		}
		int max1=1;
		for (int i=0;i<n;i++)
			max1=max(max1,l[i]+d[i]-1);
		cout<<max1<<endl;
	}
}