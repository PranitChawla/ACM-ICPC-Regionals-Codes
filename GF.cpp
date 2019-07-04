#include <iostream>
#include <math.h>
using namespace std;
int GF(int n)
{

	if (n==1)
	{
		//cout<<0<<" ";
		return 0;
	}
	else if (n==2)
	{
		//cout<<1<<" ";
		return 1;
	}
	else 
	{
		//cout<<((pow(GF(n-2),2))-GF(n-1));
		return ((GF(n-2)*GF(n-2))-GF(n-1));
	}
}	
int main()
{
	int n;
	cin>>n;
	int result;
	for (int i=1;i<=n;i++)
	{
		result=GF(i);
		cout<<result<<" ";
	}
	//cout<<result;
}