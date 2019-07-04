#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[502][502];
int main()
{
	ll n,m;
	cin>>n>>m;
	char a[n+1][m+1];
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	memset(dp,0,sizeof(dp));
	a[1][1]=='.'?dp[1][1]=1:dp[1][1]=0;
	for (ll i=2;i<=n;i++)
	{
		if (a[i][1]=='.')
			dp[i][1]=dp[i-1][1]+1;
		else
			dp[i][1]=dp[i-1][1];
	}
	for (ll i=2;i<=m;i++)
	{
		if (a[1][i]=='.')
			dp[1][i]=dp[1][i-1]+1;
		else
			dp[1][i]=dp[1][i-1];
	}
	for (ll i=2;i<=n;i++)
	{
		for (ll j=2;j<=m;j++)
		{
			ll row_count=0;
			ll col_count=0;
			for (ll k=1;k<=i;k++)
			{
				if (a[j][k]=='.')
					row_count++;
			}
			for (ll k=1;k<j;k++)
			{
				if (a[i][k]=='.')
					col_count++;
			}
			dp[i][j]=dp[i-1][j-1]+row_count+col_count;
		}
	}
	ll r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	cout<<dp[r2][c2]-(dp[r1-1][c2])-dp[r1][c1-1]+dp[r1-1][c1-1];

}