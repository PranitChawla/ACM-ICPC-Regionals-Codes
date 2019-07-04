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
	ll dp[n+1];
	dp[0]=0;
	dp[1]=0;
	dp[2]=abs(a[2]-a[1]);
	for (ll i=3;i<=n;i++)
		dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
	cout<<dp[n];
}