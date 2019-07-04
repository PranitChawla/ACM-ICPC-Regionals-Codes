#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for (int i=1;i<=n;i++)
		cin>>a[i];
	int val;
	if (a[1]==0)
	val=0;
else
	val=1;
	for (int i=1;i<=n-1;i++)
	{
		if (i%2==1&&val>=0)
			val-=a[i+1];
		else if (i%2==1&&val<0)
			val+=a[i+1];
		else if (i%2==0&&val>=0)
			val+=a[i+1];
		else 
			val-=a[i+1];
		//cout<<val<<endl;
	}
	// if (n==1&&a[n]==1)
	// 	val=1;
	//
	//cout<<val<<endl;
	if (abs(val)>=k)
		cout<<1<<endl;
	else
		cout<<2<<endl;
	}
}