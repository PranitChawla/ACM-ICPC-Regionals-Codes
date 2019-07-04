#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[2*n+1];
	for (ll i=1;i<=2*n;i++)
		a[i]=i;
	ll j=1;
	ll i=1;
	for (ll j=1;j<=k;j++)
	{
		ll temp;
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		i+=2;
	}
	for (ll i=1;i<=2*n;i++)
		cout<<a[i]<<" ";
}