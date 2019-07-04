#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll c=0;
	ll sum=0;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]<0)
			c++;
		sum+=a[i];
	}
	if (c==n)
	{	
		cout<<-1*sum;
		exit(0);
	}
	ll dp[n+1];
	dp[0]=0;
	ll ma=INT_MIN;
	for (ll i=1;i<=n;i++)
	{
		dp[i]=max(dp[i-1]+a[i],a[i]);
		ma=max(ma,dp[i]);
	}
	cout<<-(sum-ma)+ma;	
}