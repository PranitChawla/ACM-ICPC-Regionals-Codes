#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100004][3];
int main()
{
	ll n;
	cin>>n;
	ll x[n+1];
	ll h[n+1];
	for (ll i=1;i<=n;i++)
	{
		cin>>x[i]>>h[i];
	}
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	dp[1][0]=0;
	dp[1][1]=1;
	//dp[1][2]=0;
	dp[1][2]=1;
	for (ll i=2;i<=n;i++)
	{
		dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-2][2]));
		if (x[i]-h[i]>x[i-1])
		{
			dp[i][1]=max(dp[i][0],max(dp[i-1][0],dp[i-1][1])+1);
		}
		else
			dp[i][1]=max(dp[i-1][0],max(dp[i-1][1],dp[i-2][2]));


	}
	cout<<max(dp[n][0],max(dp[n][2],dp[n][1]));
}