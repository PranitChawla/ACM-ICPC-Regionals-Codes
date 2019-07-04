#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for (int i=1;i<=n;i++)
		cin>>a[i];
	int max;
	for (int i=1;i<=n;i++)
	{
		int count=1;
		int left=i-1;
		int comp=i;
		int right=i+1;
		while (left>=1&&a[left]<=a[comp])
			{
				count++;
				left--;
				comp--;
			}
			comp=i;
		while (right<=n&&a[right]<=a[comp])
		{
			count++;
			right++;
			comp++;
		}
		if (i==1)
			max=count;
		else
		{
			if (count>max)
				max=count;
		}
	}
	cout<<max;
}