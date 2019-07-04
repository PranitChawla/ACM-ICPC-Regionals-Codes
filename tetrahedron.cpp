#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[10000004][2];
ll m=1000000007;
int main()
{
	ll n;
	cin>>n;
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	dp[0][1]=0;
	dp[1][0]=0;
	dp[1][1]=1;
	for (ll i=2;i<=n;i++)
	{
		dp[i][1]=(dp[i-1][0]%m+2*dp[i-1][1]%m)%m;
		dp[i][0]=(3%m*(dp[i-1][1])%m)%m;
	}
	cout<<dp[n][0]%m;
	
}