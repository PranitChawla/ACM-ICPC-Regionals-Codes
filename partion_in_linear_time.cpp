#include <iostream>
using namespace std;
int main()
{
	int arr[]={3,2,8,5,1,4,7,6};
	int i;
	int temp;
	int pivot=arr[0];
	int j=1;
	for (i=1;i<8;i++)
	{
		if (arr[i]<pivot)
		{
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			j++;
		}
		for (int t=0;t<8;t++)
		cout<<arr[t]<<" ";
	cout<<endl;
	cout<<"check till "<<i<<""<<endl;
	cout<<"pivot location "<<j<<endl;
	}
	temp=arr[0];
	arr[0]=arr[j-1];
	arr[j-1]=pivot;
	for (int t=0;t<8;t++)
		cout<<arr[t]<<" ";
	// for (i=0;i<7;i++)
	// 	cout<<arr[i]<<" ";
}