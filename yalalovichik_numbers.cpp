#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
typedef long long int ll;
ll m=1000000007;
ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
cpp_int modular_exp (cpp_int x,cpp_int n,cpp_int M)
{
	if (n==0)
		return 1;
	else if (n%2==0)
		return (modular_exp((x*x)%M,n/2,M))%M;
	else 
		return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
}
int main()
{
	cpp_int t;
	cin>>t;
	while (t--)
	{
		string n;
		cin>>n;
		cpp_int sum=0;
		cpp_int ans=0;
		cpp_int a=n.length()-2;
		cpp_int d=n.length()-1;
		sum=(n.length()-1)*a+d*(n.length()-1)*(n.length()-2)/2;
		sum=sum+(n.length())*(n.length())-1;
		cout<<sum<<endl;
		for (ll i=0;i<n.length();i++)
		{
			ans=(ans+(n[i]-'0')%m*modular_exp(10,sum,m)%m)%m;
		}
		cout<<ans<<endl;
	}
}