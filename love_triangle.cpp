#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;
ll modular_exp (ll x,ll n,ll M)
{
	if (n==0)
		return 1;
	else if (n%2==0)
		return (modular_exp((x*x)%M,n/2,M))%M;
	else 
		return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
}
ll modInverse(ll a, ll m)
{
 
        //cout << "Inverse doesn't exist";
        // If a and m are relatively prime, then modulo inverse
        // is a^(m-2) mode m
        //cout << "Modular multiplicative inverse is "
             // << power(a, m-2, m);
    	return (modular_exp(a,m-2,m));
}
ll nc3 (ll p)
{
	ll a=(((p%m)*(p-1)%m)%m*(p-2)%m)%m;
	ll b=modInverse(6,m);
	ll c=((a%m)*(b%m))%m;
	//cout<<b<<endl;
	return c;
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
	ll x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	ll a,b,c;
	a=__gcd(abs(x1-x2),abs(y1-y2))-1;
	b=__gcd(abs(x2-x3),abs(y2-y3))-1;	
	c=__gcd(abs(x1-x3),abs(y1-y3))-1;
	//cout<<a<<" "<<b<<" "<<c<<endl;
	ll p=(a%m+b%m+c%m+3)%m;
	ll q=(a%m+2)%m;
	ll r=(b%m+2)%m;
	ll s=(c%m+2)%m;
	//cout<<nc3(6)<<endl;
	cout<<(nc3(p)-nc3(q)-nc3(r)-nc3(s)+10*m)%m<<endl;
	//cout<<((((a%mod)*(b%mod))%mod)*(c%mod))%mod+((((a%mod)*((a-1)%mod))%mod*((b+c)%mod))%mod)/2+((((b%mod)*((b-1)%mod))%mod*((a+c)%mod))%mod)/2+(((c%mod)*((c-1)%mod)*((b+a)%mod))%mod)/2+(((b%mod)*((b-1)%mod))%mod)/2+(((a%mod)*((a-1)%mod))%mod)/2+(((c%mod)*((c-1)%mod))%mod)/2+((2*((a%mod+b%mod+c%mod)%mod))%mod)+(b%mod)*(c%mod)+(a%mod)*(c%mod)+(b%mod)*(a%mod)+1<<endl;
 }
// To compute x^y under modulo m

}