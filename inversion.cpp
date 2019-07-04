#include <iostream>
using namespace std;
int count=0;
void no_of_inversions (int arr[],int l,int r)
{
	cout<<l<<" "<<r;
	cout<<endl;
	if (l<r)
	{
		if (arr[l]>arr[l+1])
		{
			count++;
			no_of_inversions(arr,l+1,r);
		}
		else 
		{
			no_of_inversions(arr,l+1,r);
		}
	}
}
int main()
{
	int arr[7]={38,27,43,3,9,82,10};
	int l=0;
	int r=6;
	no_of_inversions(arr,l,r);
	cout<<count;
}