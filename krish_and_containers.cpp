#include <bits/stdc++.h>
using namespace std;
long long int count_global=0;
void updateutil (long long int tree[],long long int si,long long int ss,long long int se,long long int us,long long int ue,long long int n)
{
	if (ss>se||ss>ue||se<us)
		return;
	else if (ss==se&&si<=2*n-1)
	{
		tree[si]++;
		return;
	}
	else if (si<=2*n-1)
	{
		long long int mid;
		mid=(ss+se)/2;
		updateutil(tree,2*si,ss,mid,us,ue,n);
		updateutil(tree,2*si+1,mid+1,se,us,ue,n);
	}
	else 
		return;
}
void count_greater(long long int tree[],long long int si,long long int ss,long long int se,long long int temp,long long int n)
{
	//long long int count=0;
	if (ss>se)
		return;
	else if (ss==se&&si<=2*n-1)
	{
		if (tree[si]>=temp)
		{
			//cout<<"check"<<endl;
			count_global++;
			//cout<<*count<<endl;
			return;
		}
		else
			return;
	}
	else if (si<=2*n-1)
	{
		long long int mid;
		mid=(ss+se)/2;
		count_greater(tree,2*si,ss,mid,temp,n);
		count_greater(tree,2*si+1,mid+1,se,temp,n);
	}
	else 
		return;
}
int main()
{
	long long int n;
	cin>>n;
	//int a[n+1];
	long long int size;
	size=2*n+10;
	long long int tree[size];
	for (long long int i=1;i<=2*n+1;i++)
		tree[i]=0;
	long long int m;
	cin>>m;
	for (long long int i=0;i<m;i++)
	{
		long long int left,right;
		cin>>left>>right;
		updateutil(tree,1,1,n,left,right,n);
		// for (int j=left;j<=right;j++)
		// 	a[j]++;
	}
	// for (int i=1;i<=2*n-1;i++)
	// 	cout<<tree[i]<<" ";	
	long long int k;
	cin>>k;
	for (long long int i=0;i<k;i++)
	{
		long long int temp;
		cin>>temp;
		// for (int j=1;j<=n;j++)
		// {
		// 	if (a[j]>=temp)
		// 		count++;
		// }
		count_greater(tree,1,1,n,temp,n);
		cout<<count_global<<endl;
		count_global=0;
	}
}