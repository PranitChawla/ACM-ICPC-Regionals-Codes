#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
cpp_int factorial(int n)
{
	cpp_int fact=1;
	for (cpp_int i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	int n;
	cin>>n;
	cout<<factorial(n);
	cout<<endl;
	}
}