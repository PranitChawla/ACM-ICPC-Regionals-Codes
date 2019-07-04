#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll h[n+1];
	ll a[n+1];
	ll home[n+1];
	ll size=pow(10,5)+2;
	ll home_counts[size];
	for (ll i=1;i<=size;i++)
		home_counts[i]=0;
	ll away[n+1];
	for (ll i=1;i<=n;i++)
	{
		cin>>h[i]>>a[i];
		home[i]=n-1;
		away[i]=n-1;
		home_counts[h[i]]++;
	}
	for (ll i=1;i<=n;i++)
	{
		away[i]=n-1-home_counts[a[i]];
		home[i]=n-1+home_counts[a[i]];
	}
	for (ll i=1;i<=n;i++)
		cout<<home[i]<<" "<<away[i]<<endl;
}