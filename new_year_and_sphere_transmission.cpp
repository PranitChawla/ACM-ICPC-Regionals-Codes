#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	set <ll> s;
	for (ll i=1;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			ll a=i;
			ll b=n/i;
			ll n1=n/a;
			ll n2=n/b;
			s.insert(n1+(n1-1)*n1*a/2);
			s.insert(n2+(n2-1)*n2*b/2);
		}
	}
	set <ll>::iterator it;
	for (it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
}