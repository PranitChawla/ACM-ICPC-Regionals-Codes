#include <bits/stdc++.h>
using namespace std;
bool is_sorted(long long int arr[],long int n)
{
	for (int i=2;i<=n;i++)
	{
		if (arr[i-1]>arr[i])
			return false;
	}
	return true;
}
int main()
{
	long int n;
	cin>>n;
	long long int a[n+1];
	for (int i=1;i<=n;i++)
		cin>>a[i];
	long int left=1;
	long int right=n;
	long int i=1;
	while ((a[i+1]>a[i])&&i<n)
	{
		left++;
		i++;
	}
	i=n;
	while ((a[i-1]<a[i])&&i>1)
	{
		right--;
		i--;
	}
	if (left==n&&right==1)
	{
		cout<<"yes"<<endl;
		cout<<1<<" "<<1;
		exit(0);
	}
	for (int i=left;i<=(left+right)/2;i++)
	{
		long long int temp;
		temp=a[i];
		a[i]=a[right+left-i];
		a[right+left-i]=temp;
	}	 
	if (is_sorted(a,n))
	{
		cout<<"yes"<<endl;
		cout<<left<<" "<<right;
	}
	else
		cout<<"no";
}