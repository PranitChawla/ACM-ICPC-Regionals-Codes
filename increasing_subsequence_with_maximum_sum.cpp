#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	int l[n];
	memset(l,0,sizeof(l));
	l[0]=a[0];
	for (int i=1;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (a[j]<a[i]&&l[j]>l[i])
				l[i]=l[j];
		}
		l[i]+=a[i];
	}
	int max_sum=0;
	for (int i=0;i<n;i++)
		max_sum=max(max_sum,l[i]);
	cout<<max_sum;
}