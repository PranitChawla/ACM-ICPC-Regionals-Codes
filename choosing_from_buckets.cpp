#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1][k+1];
	ll si[n+1];
	for (ll i=1;i<=n;i++)
	{
		si[i]=0;
		for (ll j=1;j<=n;j++)
		{
			cin>>a[i][j];
			si[i]+=a[i][j];
		}
	}
	double dp[n+1][k+1];
	for (ll i=1;i<=k;i++)
		dp[1][i]=(double)(a[1][i])/si[1];
	for (ll i=2;i<=n;i++)
	{
		for (ll j=1;j<=k;j++)
		{
			dp[i][j]=(1-(double)dp[i-1][j])*(double)(a[i][j])/(si[i]+1)+(dp[i-1][j])*(double)(a[i][j]+1)/(si[i]+1);
		}
	}
	for (ll i=1;i<=k;i++)
		{
			printf("%0.10lf ",dp[n][i]);
		}
}