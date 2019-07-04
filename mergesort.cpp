#include <iostream>
using namespace std;
void merge (int arr[],int l,int m,int r)
{
	int n;
	n=r-l+1;
	int k;
	int i=l;
	int j=m+1;
	for (k=0;k<n;k++)
	{
		if (arr[i]<arr[j])
		{
			arr[k]=arr[i];
			i++;
		}
		else
		{
			arr[k]=arr[j];
			j++;
		}
	}
}
int mergesortandcount (int arr[], int l ,int r)
{
	int count=0;
	if (l!=r)
	{
		int m=(l+r)/2;
		mergesortandcount(arr,l,m);
		mergesortandcount(arr,m+1,r);
		mergeandncount(arr,l,m,r);
	}
}
int main()
{
	int arr[7]={38,27,43,3,9,82,10};
	int l=0;
	int r=6;
	mergesortandcount(arr,l,r);
	for (int i=0;i<7;i++)
		cout<<arr[i]<<" ";
}