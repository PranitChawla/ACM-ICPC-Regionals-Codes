#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[102][102][12][12];
ll n1,n2,k1,k2;
void solve (ll a,ll b,ll c,ll d)
{
	if (dp[a][b][c][d]!=-1)
		return;
	else
	{
		if (a==0&&b==0)
		{
			dp[a][b][c][d]=1;
			return;
		}
		else
		{
			ll sum=0;
			if (a>0&&c>0)
			{
				solve(a-1,b,c-1,k2);
				sum+=dp[a-1][b][c-1][k2];
			}
			if (b>0&&d>0)
			{
				solve(a,b-1,k1,d-1);
				sum+=dp[a][b-1][k1][d-1];
			}
			dp[a][b][c][d]=sum;
			return;
		}
	}
}
int main()
{
	cin>>n1>>n2>>k1>>k2;
	memset(dp,-1,sizeof(dp));
	solve(n1,n2,k1,k2);
	cout<<dp[n1][n2][k1][k2];
}