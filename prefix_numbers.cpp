#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	ll m=1000000000000000000;
	cin>>t;
	while (t--)
	{
		string x;
		ll y;
		cin>>x>>y;
		ll rem=(x[0]-'0')%y;
		for (ll i=1;i<x.length();i++)
		{
			rem=(10*rem+(x[i]-'0'))%y;
		}
		if (rem==0)
		{
			cout<<x<<endl;
			continue;
		}
		rem=rem*10;
		ll q=rem/y;
		if (rem%y==0)
			cout<<x<<0<<endl;
		else
		{
			ll a=(q+1)*y;
			a=a-rem;
			cout<<x<<a<<endl;
		}
	}
}