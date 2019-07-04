#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
ll a[102];
ll b[102];
ll dp[102][102];
void solve (ll i, ll j)
{
	if (dp[i][j]!=-1)
		return;
	else
	{
		if (i==0||j==0)
		{
			dp[i][j]=0;
			return;
		}
		else
		{
			if (abs(a[i]-b[j])<=1)
			{
			//cout<<a[i]<<" "<<b[j]<<endl;
			solve(i-1,j-1);
			dp[i][j]=dp[i-1][j-1]+1;
			//cout<<"check"<<endl;
			}
			else
			{
			solve(i-1,j);
			solve(i,j-1);
			dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
			//cout<<dp[i][j]<<" ";
			return;
		}
	}
}
int main()
{
	cin>>n;
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	memset(dp,-1,sizeof(dp));
	for (ll i=1;i<=m;i++)
		cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	solve(n,m);
	cout<<dp[n][m];
}