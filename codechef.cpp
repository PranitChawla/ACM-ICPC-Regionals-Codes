#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	int x;
	cin>>x;
	int result=0;
	if (x%5!=0)
		result=-1;
	else if (x%10==0)
		result=0;
	else
	{
		while (x%10!=0)
		{
			x=x*2;
			result++;
		}
	}
cout<<result<<endl;
	}
}