#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main ()
{
	ll n;
	cin>>n;
	ll a[n+5];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll steps=0;
	for (ll i=1;i<n;i++)
	{
		if (a[i]>a[i+1])
		{
			ll diff=a[i]-a[i+1];
			ll j=i+1;
			steps+=diff;
			if (j>=n)
				continue;
			while (a[j]>a[i]&&j<n)
			{
				a[j]+=diff;
				//a[j+1]+=diff;
				j++;
				if (j==n+1)
					break;
			}
		}
	}
	cout<<steps;
}