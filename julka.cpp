#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
int main()
{
	for (int i=0;i<10;i++)
	{
		cpp_int a,b;
		cin>>a>>b;
		cout<<(a+b)/2<<endl;
		cout<<(a-b)/2<<endl;
	}
}
