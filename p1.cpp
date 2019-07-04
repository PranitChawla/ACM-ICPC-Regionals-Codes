#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;
int main()
{
	ll n,l,r;
	cin>>n>>l>>r;
	ll a,b,c;
	ll tot=r-l+1;
	a=tot/3;
	b=tot/3;
	c=tot/3;
	if (r%3==2)
		c++;
	else if (r%3==1)
		b++;
	ll k1=n/3;
	ll k2=n/3;
	ll k3=n/3;
	if (n%3==1)
		k2++;
	else if (n%3==2)
		k3++;
	ll ans;
	ans=k1*k1*b*c+k2*k2*b*c+k3*k3*b*c;
	cout<<ans;
}