#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	double tot_area=0;
	for (int i=n-1;i>=0;i=i-2)
	{
		double area;
		if (i==0)
			area=PI*(a[0]*a[0]);
		else
		{
				area=PI*((a[i]*a[i])-(a[i-1]*a[i-1]));
		}
		tot_area+=area;
	}
	printf("%0.9lf",tot_area);
}