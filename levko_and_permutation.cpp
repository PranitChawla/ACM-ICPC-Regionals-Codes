#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	if (n==k)
		cout<<-1;
	else
	{
		for (ll i=n;i>=(n-k+1);i--)
			a[i]=i;
		//a[2]=2;
		ll w=2;
		for (ll i=3;i<=(n-k);i++)
			{
				a[i]=w;
				w++;
			}
		a[1]=n-k;
		if ((n-k)<2)
			a[2]=2;
		else
			a[2]=1;
		for (ll i=1;i<=n;i++)
			cout<<a[i]<<" ";
	}

}