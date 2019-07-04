#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact [1000004];
ll m=998244353;
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
	ll n;
	cin>>n;
	fact[0]=1;
	fact[1]=1;
	for (ll i=2;i<=n;i++)
	{
		fact[i]=(fact[i-1]%m*i%m)%m;
	}
	ll sum=0;
	for (ll i=1;i<=n-1;i++)
	{
		sum=sum+(fact[n]%m*modular_exp(fact[i],m-2,m)%m)%m;
	}
	ll ans=(n%m*fact[n]%m-sum%m+m)%m;
	cout<<ans;
}