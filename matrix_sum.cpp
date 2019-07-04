#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[1002][1002];
int main()
{
	memset(dp,0,sizeof(dp));
	ll n,m;
	cin>>n>>m;
	ll a[n+1][m+1];
	ll rowsum[n+1][m+1];
	ll colsum[n+1][m+1];
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for (ll i=1;i<=n;i++)
		rowsum[i][1]=a[i][1];
	for (ll i=1;i<=m;i++)
		colsum[1][i]=a[1][i];
	for (ll i=1;i<=n;i++)
	{
		for (ll j=2;j<=m;j++)
		{
			rowsum[i][j]=rowsum[i][j-1]+a[i][j];
		}
	}
	for (ll i=1;i<=m;i++)
	{
		for (ll j=2;j<=n;j++)
			{
				colsum[j][i]=colsum[j-1][i]+a[j][i];	
			}
	}
	dp[1][1]=a[1][1];
	for (ll i=2;i<=n;i++)
		dp[i][1]=colsum[i][1];
	for (ll i=2;i<=m;i++)
		dp[1][i]=rowsum[1][i];
	for (ll i=2;i<=n;i++)
	{
		for (ll j=2;j<=m;j++)
		{
			dp[i][j]=dp[i-1][j-1]+rowsum[i][j-1]+colsum[i-1][j]+a[i][j];
		}
	}
	ll q;
	cin>>q;
	// for (ll i=1;i<=n;i++)
	// {
	// 	for (ll j=1;j<=m;j++)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	while (q--)
	{
		ll a,b;
		cin>>a>>b;
		cout<<dp[a][b]<<endl;
	}
}