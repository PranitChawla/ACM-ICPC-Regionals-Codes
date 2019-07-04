#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
typedef long long int ll;
using boost::multiprecision::cpp_int;
cpp_int gcd(cpp_int a, cpp_int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
	cpp_int t;
	cin>>t;
	while (t--)
	{
		cpp_int n,a,b,k;
		cin>>n>>a>>b>>k;
		cpp_int l=(a*b)/gcd(a,b);
		// cout<<n/a<<" "<<n/b<<" "<<n/l<<endl;
		cpp_int a1=n/a;
		cpp_int a2=n/b;
		cpp_int a3=n/l;
		cpp_int ans;
		ans=a1+a2-2*a3;
		if (ans>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
}