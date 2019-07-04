#include <bits/stdc++.h>
using namespace std;
long long int calc_n (long long int n)
{
	double D;
	D=sqrt(1+8*n);
	double root;
	root=(double)((-1+D)/2);
	if (root==(int)root)
		return root-1;
	//cout<<root<<endl;
	return (floor(root));
}
int main()
{
	
	int t;
	cin>>t;
	while (t)
	{
	//long long int size=pow(10,7)+10;
	//long long int a[size][size];
	long long int value;
	cin>>value;
	long long int n;
	n=calc_n(value);
	//cout<<n<<endl;
	long long int sum=n*(n+1)/2;
	long long int diff=value-sum;
	if (n%2==1)
	{
		long long int numerator;
		long long int denominator;
		numerator=1;
		denominator=n+1;
		diff--;
		while (diff>0)
		{
			numerator++;
			denominator--;
			diff--;
		}
		cout<<"TERM "<<value<<" IS "<<numerator<<"/"<<denominator<<endl;
	}
	else 
	{
		long long int numerator;
		long long int denominator;
		numerator=n+1;
		denominator=1;
		diff--;
		while (diff>0)
		{
			numerator--;
			denominator++;
			diff--;
		}
	cout<<"TERM "<<value<<" IS "<<numerator<<"/"<<denominator<<endl;
	}
	t--;
	}
}