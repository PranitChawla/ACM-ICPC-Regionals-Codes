#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[102][100004];
ll prefix[102][100004];
ll m=1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	memset(prefix,0,sizeof(prefix));
	for (ll i=1;i<=k;i++)
		dp[0][i]=0;
	for (ll i=1;i<=n;i++)
	{
		for (ll r=0;r<=k;r++)
			{
				if (r==0)
					prefix[i-1][r]=(dp[i-1][0])%m;
				else
					prefix[i-1][r]=(prefix[i-1][r-1]%m+dp[i-1][r]%m)%m;
			}
		for (ll j=0;j<=k;j++)
		{
			if (j-a[i]-1>=0)
			dp[i][j]=(dp[i][j]%m+(prefix[i-1][j]%m-prefix[i-1][j-a[i]-1]%m+m))%m;
			else
				dp[i][j]=(dp[i][j]%m+prefix[i-1][j]%m)%m;

			//prefix[i][j]=prefix[i][j-1]+dp[i][j];
		}
	}
	cout<<dp[n][k]%m;
}