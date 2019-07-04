#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[102][4];
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	// for (ll i=0;i<=3;i++)
	// 	dp[0][i]=0;
	for (ll i=0;i<=100;i++)
	{
		for (ll j=0;j<=2;j++)
		{
			dp[i][j]=1000;
		}
	}
	// dp[1][0]=1;
	// if (a[1]==1||a[1]==3)
	// 	dp[1][1]=0;
	// if (a[1]==2||a[1]==3)
	// 	dp[1][2]=0;
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	for (ll i=1;i<=n;i++)
	{
		//if (a[i]==0)
			//cout<<dp[i-1][0]<<" "<<dp[i-1][1]<<" "<<dp[i-1][2]<<endl;
			dp[i][0]=min(dp[i-1][1],min(dp[i-1][2],dp[i-1][0]))+1;
			//cout<<dp[i][0]<<" ";
		if (a[i]==1||a[i]==3)
			dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
		if (a[i]==2||a[i]==3)
			dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
	}
	// ll ma=INT_MIN;
	// for (ll i=0;i<3;i++)
	// {
	// 	ma=max(ma,dp[n][i]);
	// }
	// cout<<n-ma;
	// for (ll i=1;i<=n;i++)
	cout<<min(min(dp[n][0],dp[n][1]),dp[n][2]);
}