#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100004];
int main()
{
	ll t,k;
	cin>>t>>k;
	dp[0]=1;
	for (ll i=1;i<=100000;i++)
	{
		if (i<k)
			dp[i]=1;
		else
			dp[i]=dp[i-1]+dp[i-k];
		//cout<<dp[i]<<" ";
	}
	for (ll i=1;i<=100000;i++)
		dp[i]=dp[i-1]+dp[i];
	for (ll i=0;i<t;i++)
	{
		ll a,b;
		cin>>a>>b;
		cout<<dp[b]-dp[a-1]<<endl;
	}
}