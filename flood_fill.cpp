#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[5005][5005];
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	for (ll i=1;i<=5000;i++)
	{
		if (a[1]==i)
			dp[1][i]=0;
		else
			dp[1][i]=1;
	}
	for (ll i=2;i<=n;i++)
	{
		for (ll j=1;j<=5000;j++)
		{
			if (a[i]==j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
				dp[i][j]=dp[i-1][j]+1;
		}
	}
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=5;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	ll ans=INT_MAX;
	for (ll i=1;i<=5000;i++)
		ans=min(ans,dp[n][i]);
	cout<<ans;
}