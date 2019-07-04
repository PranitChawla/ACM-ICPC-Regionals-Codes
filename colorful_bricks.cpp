#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp [2002][2002];
ll mod=998244353;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	memset(dp,0,sizeof(0));
	for (ll i=0;i<=k;i++)
		dp[0][i]=0;
	for (ll i=1;i<=n;i++)
		dp[i][0]=m;
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=k;j++)
		{
			dp[i][j]=((m-1)%mod*dp[i-1][j-1]%mod+dp[i-1][j]%mod)%mod;
		}
	}
	cout<<dp[n][k]%mod;
}