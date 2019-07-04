#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
typedef long long int ll;
using boost::multiprecision::cpp_int;
cpp_int modular_exp (cpp_int x,cpp_int n,cpp_int M)
{
	if (n==0)
		return 1;
	else if (n%2==0)
		return (modular_exp((x*x)%M,n/2,M))%M;
	else 
		return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
}
cpp_int gcd_cal (cpp_int a, cpp_int b)
{
	if (b==0)
		return a;
	else 
		return (gcd_cal(b,a%b));
}
// ll euler (ll n)
// {
// 	ll phi=n;
// 	vector <ll> fact;
// 	ll temp=n;
// 	for (ll i=2;i*i<=temp;i++)
// 	{
// 		ll count=0;
// 		while (n%i==0)
// 		{
// 			n/=i;
// 			count++;
// 		}
// 		if (count)
// 			fact.push_back(i);
// 		//cout<<count<<endl;
// 	}
// 	if (n!=1)
// 		return temp-1;
// 	else
// 	{
// 		vector <ll>::iterator it;
// 		for (it=fact.begin();it!=fact.end();it++)
// 		{
// 			ll temp;
// 			temp=*it;
// 			//cout<<temp<<endl;
// 			if (temp!=0)
// 			phi=phi*(temp-1)/temp;
// 		}
// 		return phi;
// 	}
// }
int main()
{
	int T;
	cin>>T;
	cpp_int M;
	M=1000000007;	
	// cpp_int test=pow(10,12);
	//cout<<euler(test);
	//cout<<modular_exp(test,test,M);
	while (T--)
	{
		cpp_int A,B,N;
		cin>>A>>B>>N;
		cpp_int n=abs(A-B);
		if (n==0)
		{
			cpp_int result1=modular_exp(A,N,M)%M;
			cpp_int result2=modular_exp(B,N,M)%M;
			cpp_int result=(result1+result2)%M;
			cout<<result<<endl;
		}
		else
		{
		A=A%n;
		B=B%n;
		// ll phin=euler(n);
		// N=N%phin;
		cpp_int result1;
		result1=modular_exp(A,N,n);
		result1=result1%n;
		cpp_int result2;
		result2=modular_exp(B,N,n);
		result2=result2%n;
		cpp_int result;
		result=(result1+result2)%n;	
		cpp_int gcd=gcd_cal(n,result);
		cout<<gcd%M<<endl;
		}	
	}
}