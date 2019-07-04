#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll s=0;
	for (ll i=1;i<n;i++)
	{
		if (a[i]+a[i-1]<k)
		{
			s+=(k-a[i-1]-a[i]);
			a[i]=k-(a[i-1]);
		}
	}
	cout<<s<<endl;
	for (ll i=0;i<n;i++)
		cout<<a[i]<<" ";
}