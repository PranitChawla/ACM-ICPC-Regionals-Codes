#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int l;
	int n;
	cin>>n>>l;
	long long int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if (n==1)
	{
		double max1=a[0];
		double max2=l-a[0];
		if (max1>max2)
			printf("%0.9lf",max1);
		else
			printf("%0.9lf",max2);
	}
	else if (a[0]==0&&a[n-1]==l)
	{
		long long int diff[n];
		for (int i=0;i<n-1;i++)
			diff[i]=a[i+1]-a[i];
		double max=diff[0];
		for (int i=0;i<n-1;i++)
		{
			if (diff[i]>max)
				max=diff[i];
		}
		max=(double)max/2;
		double result;
		result=(double)max;
		printf("%0.9lf",result);
	}
	else if (a[0]!=0&&a[n-1]==l)
	{
		long long int diff[n];
		for (int i=0;i<n-1;i++)
			diff[i]=a[i+1]-a[i];
		double max=diff[0];
		for (int i=0;i<n-1;i++)
		{
			if (diff[i]>max)
				max=diff[i];
		}
		max=(double)max/2;
		//cout<<max<<endl;
		long long int max2=a[0];
		double result;
		if (max>max2)
			result=(double)max;
		else 
			result=(double)max2;
		printf("%0.9lf",result);
	}
	else if (a[0]==0&&a[n-1]!=l)
	{
		long long int diff[n];
		for (int i=0;i<n-1;i++)
			diff[i]=a[i+1]-a[i];
		double max=diff[0];
		for (int i=0;i<n-1;i++)
		{
			if (diff[i]>max)
				max=diff[i];
		}
		max=(double)max/2;
		long long int max2=l-a[n-1];
		double result;
		if (max>max2)
			result=(double)max;
		else 
			result=(double)max2;
		printf("%0.9lf",result);
	}
	else
	{
		long long int diff[n];
		for (int i=0;i<n-1;i++)
			diff[i]=a[i+1]-a[i];
		double max=diff[0];
		for (int i=0;i<n-1;i++)
		{
			if (diff[i]>max)
				max=diff[i];
		}
		max=(double)max/2;
		long long int max2=a[0];
		long long int max3=l-a[n-1];
		// cout<<max<<" "<<max2<<" "<<max3;
		// cout<<endl;
		double result;
		if (max>max2&&max>max3)
			result=(double)max;
		else if (max2>max&&max2>max3)
			result=(double)max2;
		else 
			result=(double)max3;
		printf("%0.9lf",result);
	}


}