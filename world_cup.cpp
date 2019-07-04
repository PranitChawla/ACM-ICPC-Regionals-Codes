#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long long int a[n+1];
	long long int q[n+1];
	for (long long int i=1;i<=n;i++)
		cin>>a[i];
	long long int min=a[1];
	for (long long int i=1;i<=n;i++)
	{
		if (a[i]<min)
			min=a[i];
	}
	if (min>=n)
	{
		for (long long int i=1;i<=n;i++)
			q[i]=a[i]/n;
		long long int min=q[1];
		for (long long int i=1;i<=n;i++)
		{
		if (a[i]<min)
			min=a[i];
		}
		for (long long int i=1;i<=n;i++)
		a[i]=a[i]-min*n;
		long long int allen=1;
		long long int i=1;
		while (1)
		{
			a[i]--;
			if (i==n)
				i=1;
			else 
				i++;
			if (allen==n)
				allen=1;
			else
				allen++;

		}
	}
	else
	{

	}
}