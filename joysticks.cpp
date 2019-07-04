#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[200][200];
ll ma=INT_MIN;
void solve (ll a, ll b)
{
	if (dp[a][b]!=-1)
		return;
	else
	{
		if (a<0||b<0)
			return;
		if (a==0||b==0)
		{
			dp[a][b]=0;
			ma=max(ma,dp[a][b]);
			return;
		}
		else
		{
			solve(a-2,b+1);
			solve(a+1,b-2);
			dp[a][b]=max(dp[a-2][b+1],dp[a+1][b-2])+1;
			ma=max(ma,dp[a][b]);
			return;
		}
	}
}
int main()
{
	ll a,b;
	cin>>a>>b;
	memset(dp,-1,sizeof(dp));
	solve(a,b);
	// ll ans=INT_MIN;
	// for (ll i=0;i<=200;i++)
	// {
	// 	for (ll j=0;j<=200;j++)
	// 	{
	// 		//cout<<dp[i][j]<<" ";
	// 		ans=max(ans,dp[i][j]);
	// 	}
	// 	//cout<<endl;
	// }
	if (a==1&&b==1)
		cout<<0;
	else
	cout<<ma;
}