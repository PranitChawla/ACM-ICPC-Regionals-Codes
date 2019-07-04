#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[1004][3];
ll cost[1004][3];
ll n,m,x,y;
void solve (ll i,ll flag)
{
	if (dp[i][flag]!=-1)
		return;
	else
	{
		if (i==m+1)
			{
				dp[i][flag]=0;
				return;
			}
		if (i<=m)
		{
			ll mi=1e18;
			for (ll j=i+x-1;j<=min(i+y-1,m);j++)
			{
				solve(j+1,!flag);
				mi=min(mi,dp[j+1][!flag]+cost[j][flag]-cost[i-1][flag]);
			}
			dp[i][flag]=mi;
			return;
		}
	}
}
int main()
{
	cin>>n>>m>>x>>y;
	string s[n+1];
	for (ll i=1;i<=n;i++)
		cin>>s[i];
	cost[0][1]=0;
	cost[0][0]=0;
	for (ll j=0;j<m;j++)
	{
		cost[j+1][0]=0;
		cost[j+1][1]=0;
		for (ll i=1;i<=n;i++) // 0 to convert to .
		{
			if (s[i][j]=='#')
				cost[j+1][0]++;
		}
		for (ll i=1;i<=n;i++)
		{
			if (s[i][j]=='.') // 1 to convert to #
				cost[j+1][1]++;
		}
	}
	memset(dp,-1,sizeof(dp));
	for (ll i=2;i<=m;i++)
	{
		cost[i][0]+=cost[i-1][0];
		cost[i][1]+=cost[i-1][1];
		//cout<<cost[i][0]<<" "<<cost[i][1]<<endl;
	}
	solve(1,0);
	solve(1,1);
	// for (ll i=1;i<=m;i++)
	// 	cout<<dp[i][0]<<" ";
	// cout<<endl;
	// for (ll i=1;i<=m;i++)
	// 	cout<<dp[i][1]<<" ";
	cout<<min(dp[1][0],dp[1][1]);
}