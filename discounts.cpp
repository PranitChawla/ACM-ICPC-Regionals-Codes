#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll sum=0;
	for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
	sort(a,a+n);
	ll m;
	cin>>m;
	for (ll i=0;i<m;i++)
		{
			ll b;
			cin>>b;
			cout<<sum-a[n-b]<<endl;
		}
}