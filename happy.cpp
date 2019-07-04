#include <iostream>
using namespace std;
int sum_of_squares (int n)
{
	int sum=0;
	while (n>0)
	{
		sum=sum+(n%10)*(n%10);
		n/=10;
	}
	return sum;
}
bool happy (int n)
{
	if (sum_of_squares(n)==1)
		return true;
	else if (sum_of_squares(n)==4)
		return false;
	else 
	{
		happy(sum_of_squares(n));
	}
}
int main()
{
	int n;
	cin>>n;
	while (1)
	{
		if (happy(n+1))
		{
			n++;
			break;
		}
		n++;
	}
	cout<<n;
}