#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll ma=INT_MIN;
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		ma=max(ma,a+b);
	}
	cout<<ma;
}