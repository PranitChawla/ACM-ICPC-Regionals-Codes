#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int a[m+1];
	for (long long int i=1;i<=m;i++)
		cin>>a[i];
	long long int time=0;
	long long int correct_a[m+1];
	long long int k=1;
	long long int i=1;
	while (i<=m)
	{
		correct_a[k]=a[i];
		k++;
		while (a[i]==a[i+1])
		{
			i++;
		}
		i++;
	}
	k--;
	// for (int i=1;i<=k;i++)
	// {
	// 	cout<<correct_a[i]<<" ";
	// }
	// cout<<endl;
	//
	for (long long int i=1;i<=k;i++)
	{
		if (i==1)
			time+=correct_a[i]-1;
		else if (correct_a[i]>correct_a[i-1])
			time=time+correct_a[i]-correct_a[i-1];
		else 
			time=time+n-correct_a[i-1]+correct_a[i];
	}
	cout<<time;
}