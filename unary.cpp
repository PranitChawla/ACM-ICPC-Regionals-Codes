#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll modular_exp (ll x,ll n,ll M)
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
	ll m;
	m=pow(10,6)+3;
	string s;
	cin>>s;
	string::iterator it;
	ll count=0;
	ll total=0;
	for (it=s.end()-1;;it--)
	{
		int a;
		if (*it=='>')
			a=8;
		else if (*it=='<')
			a=9;
		else if (*it=='+')
			a=10;
		else if (*it=='-')
			a=11;
		else if (*it=='.')
			a=12;
		else if (*it==',')
			a=13;
		else if (*it=='[')
			a=14;
		else if (*it==']')
			a=15;		
		ll temp;
	//	cout<<a<<" "<<count<<endl;
		temp=(modular_exp(2,count,m)*(a%m))%m;
		//temp=(temp%m*a%m)%m;
		total=total%m+temp%m;
		//cout<<total<<endl;
		count+=4;
		if (it==s.begin())
			break;
	}
	cout<<total%m;
}