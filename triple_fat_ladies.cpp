#include <bits/stdc++.h>
using namespace std;
int main()
{
	//cin>>k;
	// for (long long int i=1;i<=2000000000;i++)
	// {
	// 	long long int curoot;
	// 	long long int num=1000*i+888;
	// 	curoot=round(pow(num, 1.0/3.0));
	// 	if (curoot*curoot*curoot==num)
	// 		{
	// 			cout<<i<<" "<<1000*i+888<<" "<<curoot;
	// 			cout<<endl;
	// 		}

	// }
	// if (cbrt(1000*7077+888)==(int)cbrt(1000*7077+888))
	// 	cout<<"yes"<<endl;
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		long long int k;
		cin>>k;
		if (k==1)
			cout<<192<<endl;
		else
			cout<<442+(k-2)*250<<endl;
	}
}