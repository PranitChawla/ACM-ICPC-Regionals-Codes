#include <iostream>
using namespace std;

void findstring (char A[],int n,int i)
{
	if (i>=n)
	{
		for (int j=0;j<n;j++)
		cout<<A[j];
		cout<<endl;	
	}
	else if (i<n)
	{
	A[i]='a';
	findstring(A,n,i+1);
	// cout<<"first set"<<endl;
	// for (int j=0;j<n;j++)
	// 	cout<<A[j];
	// cout<<endl;
	A[i]='b';
	findstring(A,n,i+1);
	// cout<<"second set"<<endl;
	// for (int j=0;j<n;j++)
	// 	cout<<A[j];
	// cout<<endl;
	A[i]='c';
	findstring(A,n,i+1);
	// cout<<"third set"<<endl;
	// for (int j=0;j<n;j++)
	// 	cout<<A[j];
	// cout<<endl;
	// for (int j=0;j<n;j++)
	// 	cout<<A[j];
	// cout<<endl;
	return;
}
}
int main()
{
	int n;
	cin>>n;
	char A[n];
	int i=0;
	findstring(A,n,i);
}