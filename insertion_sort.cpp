#include <bits/stdc++.h>
using namespace std;
void insertion_sort (int A[],int n)
{
	for (int i=1;i<n;i++)
	{
		int key=A[i];
		int j=i-1;
		while (j>=0&&A[j]>key)
		{
			A[j+1]=A[j];
			A[j]=key;
			j--;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
		cin>>A[i];
	insertion_sort(A,n);
	for (int i=0;i<n;i++)
		cout<<A[i]<<" ";
}