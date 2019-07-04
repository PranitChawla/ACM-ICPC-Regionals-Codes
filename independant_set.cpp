#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[100004];
ll dp[100004][2];
ll m=1e9+7;
void dfs (ll i,ll j)
{
	for (ll k=0;k<v[i].size();k++)
	{
		ll temp=v[i][k];
		if (temp!=j)
		{
			dfs(temp,i);
			dp[i][0]=((dp[temp][0]%m+dp[temp][1]%m)*dp[i][0]%m)%m;
			dp[i][1]=(dp[temp][0]%m*dp[i][1]%m)%m;
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	for (ll i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dp[1][0]=1;
	dp[1][1]=1;
	for (ll i=2;i<=n;i++)
		dp[i][0]=dp[i][1]=1;
	dfs(1,-1);
	cout<<(dp[1][0]%m+dp[1][1]%m)%m;
}