#include <iostream>
#include <math.h>
using namespace std;
int len (long long int n)
{
	long long int count=0;
	while (n>0)
	{
		count++;
		n/=10;
	}
	return count;
}
int calcunit (long long int n,long long int len)
{
	long long int i;
	long long int y=0;
	for (i=0;i<len/2;i++)
	{
		y=y+(n%10)*pow(10,i);
		n/=10;
	}
	return y;
}
int multiply ( int a,  int b)
{
	// int lena,lenb;
	// long long int x,y,z,w;
	// //lena=ceil(log10(a));
	// //y=calcunit(a,lena);
	// y=a%pow(10,lena/2);
	// cout<<"y"<<y<<" ";
	// x=(a-y)/(pow(10,lena/2));
	// cout<<"x"<<x<<" ";
	// w=b%pow(10,lena/2);
	// cout<<"w"<<w<<" ";
	// z=(b-w)/(pow(10,lena/2);
	// if (lena<=1)
	// 	return a*b;
	// long long int xz,wy,xwyz;
	// xz=multiply(x,z);
	// wy=multiply(w,y);
	// xwyz=multiply(x+y,w+z);
	// long long int coeff=xwyz-xz-wy;
	// return (pow(10,lena)*xz+pow(10,lena/2)*coeff+wy);
}
int main()
{
 int a,b;
	cin>>a>>b;
	long long int result;
	result=multiply(a,b);
	cout<<result;
	cout<<endl;
	cout<<a*b;
}