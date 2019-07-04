#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll min_sum=INT_MAX;
	for (ll x=1;x<=n;x++)
	{
		ll sum=0;
		for (ll j=1;j<=n;j++)
		{
			sum+=(2*a[j]*(abs(x-j)+abs(j-1)+abs(x-1)));
		}
		min_sum=min(min_sum,sum);
	}
	cout<<min_sum;
}