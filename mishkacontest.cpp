#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+1];
	bool solved[n+1];
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		solved[i]=false;
	}
	int left=1;
	int right=n;
	while (1)
	{
		if (a[left]<=k)
		{
			solved[left]=1;
			left++;
		}
		else if (a[right]<=k)
		{
			solved[right]=1;
			right--;
		}
		else if (left==right)
			break;
		else 
		{
			break;
		}
	}
	int total_no=0;
	for (int i=1;i<=n;i++)
	{
		if (solved[i]==1)
			total_no++;
	}
	cout<<total_no;
}