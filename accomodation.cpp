#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m =1000000007;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll m,n;
	cin>>m>>n;
	ll dp[n+1][m+1];
	ll c[m];
	memset(dp,0,sizeof(dp));
	for (ll i=0;i<m;i++)
		cin>>c[i];
	for (ll i=0;i<m;i++)
		dp[0][i]=1;
	for (ll i=1;i<=n;i++)
	{
		for (ll j=0;j<m;j++)
		{
			ll x,y;
			if (i>=c[j])
				x=dp[i-c[j]][j];
			else
				x=0;
			if (j>=1)
				y=dp[i][j-1];
			else
				y=0;
			dp[i][j]=(x%m+y%m)%m;
		}
	}
	cout<<dp[n][m-1]%m;
}