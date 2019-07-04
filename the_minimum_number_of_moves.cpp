#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll max_e=INT_MAX;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			max_e=min(max_e,a[i]);
		}
		ll s=0;
		for (ll i=0;i<n;i++)
			s+=-1*(max_e-a[i]);
		cout<<s<<endl;
	}
}