#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp1[1002][1002];
ll dp2[1002][1002];
ll dp3[1002][1002];
ll dp4[1002][1002];
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
	fast;
	ll n,m;
	cin>>n>>m;
	ll a[n+1][m+1];
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	memset(dp1,0,sizeof(0));
	memset(dp2,0,sizeof(0));
	memset(dp3,0,sizeof(0));
	memset(dp4,0,sizeof(0));
	for (ll i=1;i<=m;i++)
		dp1[1][i]=dp1[1][i-1]+a[1][i];
	for (ll i=1;i<=n;i++)
		dp1[i][1]=dp1[i-1][1]+a[i][1];
	for (ll i=m;i>=1;i--)
		dp2[1][i]=dp2[1][i+1]+a[1][i];
	for (ll i=1;i<=n;i++)
		dp2[i][m]=dp2[i-1][m]+a[i][m];
	for (ll i=n;i>=1;i--)
		dp3[i][1]=dp3[i+1][1]+a[i][1];
	for (ll i=1;i<=m;i++)
		dp3[n][i]=dp3[n][i-1]+a[n][i];
	for (ll i=n;i>=1;i--)
		dp4[i][m]=dp4[i+1][m]+a[i][m];
	for (ll i=m;i>=1;i--)
		dp4[n][i]=dp4[n][i+1]+a[n][i];
	for (ll i=2;i<=n;i++)
	{
		for (ll j=2;j<=m;j++)
		{
			dp1[i][j]=max(dp1[i-1][j],dp1[i][j-1])+a[i][j];
		}
	}
	for (ll i=2;i<=n;i++)
	{
		for (ll j=m-1;j>=1;j--)
		{
			dp2[i][j]=max(dp2[i-1][j],dp2[i][j+1])+a[i][j];
		}
	}
	for (ll i=n-1;i>=1;i--)
	{
		for (ll j=m-1;j>=1;j--)
		{
			dp4[i][j]=max(dp4[i+1][j],dp4[i][j+1])+a[i][j];
		}
	}
	for (ll i=n-1;i>=1;i--)
	{
		for (ll j=2;j<=m;j++)
		{
			dp3[i][j]=max(dp3[i][j-1],dp3[i+1][j])+a[i][j];
		}
	}
	ll ma=INT_MIN;
	for (ll i=2;i<=n-1;i++)
	{
		for (ll j=2;j<=m-1;j++)
		{
			ll op1=dp1[i][j-1]+dp4[i][j+1]+dp3[i+1][j]+dp2[i-1][j];
			ll op2=dp1[i-1][j]+dp4[i+1][j]+dp3[i][j-1]+dp2[i][j+1];
			ma=max(ma,max(op1,op2));
		}
	}
	cout<<ma;
}