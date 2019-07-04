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
	ll dp[n];
	dp[0]=1;
	ll ma=INT_MIN;
	for (ll i=1;i<n;i++)
	{
		if (a[i]>=a[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=1;
		ma=max(ma,dp[i]);
	}
	if (n==1)
		cout<<1<<endl;
	else
		cout<<ma;
}