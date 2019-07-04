#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for (int i=0;i<n;i++)
		{
		cin>>a[i];
		sum+=a[i];
		}
	double min_sum=n*4.5;
	double diff;
	diff=(double)(min_sum-sum);
	if (diff<=0)
		cout<<0<<endl;
	else
	{
		int sum_req;
		sum_req=ceil(diff);
		sort(a,a+n);
		int count=0;
		int sum_so_far=0;
		for (int i=0;i<n;i++)
		{
			if (sum_so_far>=sum_req)
				break;
			sum_so_far+=5-a[i];
			count++;
		}
		cout<<count<<endl;
	}

}