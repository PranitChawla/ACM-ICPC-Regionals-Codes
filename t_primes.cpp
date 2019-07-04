#include <bits/stdc++.h>
using namespace std;
bool is_prime (long long int root)
{
	// for (long long int i=2;i*i<=root;i++)
	// {
	// 	if (root%i==0)
	// 		return false;
	// }
	// return true;
	int flag=0;
	if (root==2)
		return true;
	while (root%2==0)
	{
		root/=2;
		flag=1;
	}
	if (flag==1)
		return false;
	for (long long int i=3;i*i<=root;i=i+2)
	{
		flag=0;
		while (root%i==0)
		{
			root/=i;
			flag=1;
		}
		if (flag==1)
			return false;
	}
	return true;
}
bool is_t_prime (long long int a)
{
	if (a==1||a==2)
		return false;
	double root;
	root=sqrt(a);
	if (root==(int)root)
		{
			if (is_prime(root))
				return true;
			else
				return false;
		}
	else 
		return false;
}
int main()
{
	long int n;
	cin>>n;
	long long int x[n+1];
	for (long int i=1;i<=n;i++)
		cin>>x[i];
	for (long int i=1;i<=n;i++)
	{
		if (is_t_prime(x[i]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}