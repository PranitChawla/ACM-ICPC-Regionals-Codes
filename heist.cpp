#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll count=0;
	for (ll i=1;i<n;i++)
	{
		count+=a[i]-a[i-1]-1;
	}
	cout<<count;
}