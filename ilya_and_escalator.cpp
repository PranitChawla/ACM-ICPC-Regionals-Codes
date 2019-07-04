#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
double dp[2002][2002];
int main()
{
	ll n,t;
	double p;
	cin>>n>>p>>t;
	for (ll i=0;i<=n;i++)
		dp[0][i]=0;
	dp[0][0]=1;
	for (ll i=1;i<=t;i++)
	{
		dp[i][0]=(double)dp[i-1][0]*(1-p);
		for (ll j=1;j<n;j++)
			dp[i][j]=(double)p*(dp[i-1][j-1])+(double)(1-p)*(dp[i-1][j]);
		dp[i][n]=dp[i-1][n]+dp[i-1][n-1]*(p);
	}
	double ans;
	for (ll i=0;i<=n;i++)
		ans+=(double)dp[t][i]*i;
	printf("%0.10lf",ans);
}