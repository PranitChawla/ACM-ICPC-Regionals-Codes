#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
	int a,b;
	cin>>a>>b;
	int sum=0;
	int a_=a;
	int b_=b;
	int n=1;
	while (a_>0&&b_>0)
	{
		int num;
		num=(a_/n)*(b_/n);
		sum+=(num*n*n);
		a_/=n;
		b_/=n;
		n++;
	}
	cout<<sum<<endl;
	}
}