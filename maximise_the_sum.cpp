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
		ll a[n+1];
		for (ll i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		ll sum=0;
		for (ll i=1;i<=n/2;i++)
		{
			sum+=abs(a[i]-a[n-i+1]);
		}
		cout<<sum<<endl;
	}
}