#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,x,y;
	cin>>n>>x>>y;
	ll a[n];
	ll c=0;
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]<=x)
			c++;
	}
	if (x>y)
	{
		cout<<n;
	}
	else
	{
		if (c%2==0)
			cout<<c/2;
		else
			cout<<(c+1)/2;
	}
}
