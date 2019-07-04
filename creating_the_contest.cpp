#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	vector <ll> v;
	for (ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		v.push_back(a);
	}
	ll ma=INT_MIN;
	ll c=0;
	for (ll i=1;i<v.size();i++)
	{
		if (a[i]<=2*a[i-1])
			c++;
		else
			c=1;
		ma=max(ma,c);
	}
	cout<<ma;
}