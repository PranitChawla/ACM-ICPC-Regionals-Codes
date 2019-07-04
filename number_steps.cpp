#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for (int i=0;i<N;i++)
	{
	int a,b;
	cin>>a;
	cin>>b;
	int sum=a+b;
	if (a==b)
	{
		if (a%2==0)
			cout<<sum<<endl;
		else
			cout<<sum-1<<endl;
	}
	else if (b==(a-2))
	{
		if (a%2==0)
			cout<<sum<<endl;
		else
			cout<<sum-1<<endl;
	}
	else 
		cout<<"No Number"<<endl;
	}
}