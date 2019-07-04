#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll b[n+1];
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	ll dp1[n+1];
	ll dp2[n+1];
	dp1[0]=0;
	dp2[0]=0;
	for (ll i=1;i<=n;i++)
	{
		if (i==1)
			dp1[i]=a[i];
		else
			dp1[i]=dp1[i-1]+a[i];
	}
	for (ll i=1;i<=n;i++)
	{
		if (i==1)
			dp2[i]=b[i];
		else
			dp2[i]=dp2[i-1]+b[i];
	}
	ll m;
	cin>>m;
	for (ll i=0;i<m;i++)
	{
		ll t,u,v;
		cin>>t>>u>>v;
		if (t==1)
		{
			cout<<dp1[v]-dp1[u-1]<<endl;
		}
		else
			cout<<dp2[v]-dp2[u-1]<<endl;
	}
}