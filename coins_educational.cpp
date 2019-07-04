#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
double dp[3002][3002];
int main()
{
	ll n;
	cin>>n;
	double a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	dp[1][1]=a[1];
	dp[1][0]=1-a[1];
	for (ll i=2;i<=n;i++)
	{
		for (ll j=0;j<=i;j++)
		{
			if (j==0)
				dp[i][j]=dp[i-1][j]*(1-a[i]);
			else
				dp[i][j]=dp[i-1][j-1]*a[i]+dp[i-1][j]*(1-a[i]);
		}
	}
	double ans=0;
	for (ll i=n/2+1;i<=n;i++)
		ans+=dp[n][i];
	printf("%0.10lf\n",ans);
}