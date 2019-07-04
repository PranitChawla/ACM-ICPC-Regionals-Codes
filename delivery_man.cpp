#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,x,y;
	cin>>n>>x>>y;
	ll a[n];
	ll b[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	for (ll i=0;i<n;i++)
		cin>>b[i];
	ll sum=0;
	for (ll i=0;i<n;i++)
	{
		if (a[i]>b[i])
			sum+=a[i];
		else
			sum+=b[i];
	}
	cout<<sum;
}