#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,w;
		cin>>n>>w;
		ll val[n+1];
		ll wt[n+1];
		for (ll i=1;i<=n;i++)
			cin>>val[i];
		for (ll i=1;i<=n;i++)
			cin>>wt[i];
		ll dp[n+1][w+1];
		memset(dp,0,sizeof(dp));
		for (ll i=1;i<=n;i++)
		{
			for (ll j=1;j<=w;j++)
			{
				if (wt[i]<=j)
					dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
				else
					dp[i][j]=dp[i-1][j];
			}
		}
		ll ans=INT_MIN;
		for (ll i=1;i<=w;i++)
			ans=max(ans,dp[n][i]);
		cout<<ans<<endl;
	}
}