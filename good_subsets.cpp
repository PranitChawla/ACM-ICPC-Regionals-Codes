#include <bits/stdc++.h>
using namespace std;
int gcd_cal (int a,int b)
{
	if (a==0)
		return b;
	else 
		return gcd_cal(b%a,a);
}
bool is_equal (int a[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		if (a[i]!=a[i+1])
			return false;
	}
	return true;
}
bool gcd_mul (int a[],int n)
{
	int gcd[n];
	gcd[1]=gcd_cal(a[1],a[0]);
	for (int i=1;i<n;i++)
	{
		gcd[i]=gcd_cal(a[i],gcd[i-1]);
	}
	//cout<<gcd[n-1]<<endl;
	if (gcd[n-1]>1)
		return false;
	else 
		return true;
}
int main()
{
	int t;
	cin>>t;
	while (t)
	{
	int n;
	cin>>n;
	int a[n];
	int flag=0;
	for (int i=0;i<n;i++)
		cin>>a[i];
	if (gcd_mul(a,n)&&!is_equal(a,n))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	t--;
	}
}