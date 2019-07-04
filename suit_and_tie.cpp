#include <bits/stdc++.h>
using namespace std;
int swap_count=0;
void swap (int a[],int i,int j)
{
	swap_count++;
	int temp;
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
void no_of_swaps (int a[],int key,int n)
{
	if (a[key]!=a[key+1]&&(key<=2*n-1))
	{
		int j;
		for (j=key+2;j<=2*n;j++)
		{
			if (a[j]==a[key])
				break;
		}
		//cout<<j<<" ";
		swap(a,j-1,j);
		no_of_swaps(a,key,n);
	}
	else if (a[key]==a[key+1]&&key<=2*n-1)
	{
		no_of_swaps(a,key+2,n);
	}
	else 
	{
		return;
	}
}
int main()
{
	int n;
	cin>>n;
	int size=2*n+1;
	int a[size];
	for (int i=1;i<=2*n;i++)
		cin>>a[i];
	no_of_swaps(a,1,n);
	cout<<swap_count;
}