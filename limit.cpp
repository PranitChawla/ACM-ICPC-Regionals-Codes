#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1];
	for (int i=0;i<n+1;i++)
		cin>>a[i];
	for (int i=0;i<m+1;i++)
		cin>>b[i];
	if (n>m)
	{
		if (a[0]*b[0]>0)
			cout<<"Infinity";
		else
			cout<<"-Infinity";
	}
	else if (n<m)
	{
		cout<<"0/1";
	}
	else 
	{
		int g=__gcd(abs(a[0]),abs(b[0]));
		a[0]/=g;
		b[0]/=g;
		if (a[0]*b[0]>0)
			cout<<abs(a[0])<<"/"<<abs(b[0]);
		else
			cout<<"-"<<abs(a[0])<<"/"<<abs(b[0]);
	}
}