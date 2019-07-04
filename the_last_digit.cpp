#include <bits/stdc++.h>
using namespace std;
void print_1(int a)
{
	cout<<a<<endl;
}
void print_2(int a,long long int b)
{
	b=b%4;
	int dig;
	if (b==0)
		b=4;
	int power=pow(a,b);
	dig=power%10;
	cout<<dig<<endl;
}
void print_3(int a,long long int b)
{
	b=b%2;
	int power;
	if (b==0)
	{
		power=pow(a,2);
		cout<<power%10<<endl;
	}
	else 
	{
		power=pow(a,3);
		cout<<power%10<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
	int a;
	long long int b;
	cin>>a>>b;
	a=a%10;
	if (b==0)
	{
		cout<<1<<endl;
		continue;
	}
	if (a==0||a==1||a==5||a==6)
		print_1(a);
	else if (a==2||a==3||a==4||a==7||a==8)
		print_2(a,b);
	else 
		print_3(a,b);
	}
}