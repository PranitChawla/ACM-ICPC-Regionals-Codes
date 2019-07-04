#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	int B[n];
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
	for (int i=n-1;i>=0;i--)
		cin>>B[i];
	int C[n+1];
	int carry[n+1];
	for (int i=0;i<=n;i++)
		carry[i]=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]==0&&B[i]==0&&carry[i]==0)
			C[i]=0;
		else if (A[i]==0&&B[i]==0&&carry[i]==1)
			C[i]=1;
		else if (A[i]==1&&B[i]==0&&carry[i]==0)
			C[i]=1;
		else if (A[i]==0&&B[i]==1&&carry[i]==0)
			C[i]=1;
		else if (A[i]==1&&B[i]==0&&carry[i]==1)
		{
			C[i]=0;
			carry[i+1]=1;
		}
		else if (A[i]==0&&B[i]==1&&carry[i]==1)
		{
			C[i]=0;
			carry[i+1]=1;
		}
		else if (A[i]==1&&B[i]==1&&carry[i]==0)
		{
			C[i]=0;
			carry[i+1]=1;
		}	
		else if (A[i]==1&&B[i]==1&&carry[i]==1)
		{
			C[i]=1;
			carry[i+1]=1;
		}
	}
	if (carry[n]==1)
		C[n]=1;
	else 
		C[n]=0;
	cout<<endl;
	for (int i=n;i>=0;i--)
		cout<<C[i];
}