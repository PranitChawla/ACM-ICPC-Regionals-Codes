#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,p;
		cin>>n>>p;
		ll k;
		if (n%2==0)
			k=(n+2)/2;
		else
			k=(n+1)/2;
		ll x=n%k;
		ll ans;
		if (n==2||n==1)
			ans=p*p*p;
		else
			ans=(p-x)*(p-x)+(p-n)*(p-n)+(p-n)*(p-x);
		cout<<ans<<endl;
	}
}