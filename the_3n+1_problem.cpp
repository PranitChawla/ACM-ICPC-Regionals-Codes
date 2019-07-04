#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a[1000001];
	for (ll i=1;i<=1000000;i++)
	{
		ll c=0;
		ll n=i;
		while (n!=1)
		{
			if (n%2)
				n=3*n+1;
			else
				n/=2;
			c++;
		}
		a[i]=c+1;
	}
	ll i,j;
	// do 
	// {
	while (EOF)
	{
	cin>>i>>j;
	ll ma=INT_MIN;
	for (ll t=min(i,j);t<=max(i,j);t++)
	{
		ma=max(ma,a[t]);
	}
	cout<<i<<" "<<j<<" "<<ma<<endl;
	}
}