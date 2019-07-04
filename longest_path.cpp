#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[100004];
ll dp[100004];
void f (ll n)
{
	if (dp[n]!=-1)
		return;
	if (v[n].size()==0)
	{
		dp[n]=0;
		return;
	}
	else
	{
		ll ans=INT_MIN;
		for (ll i=0;i<v[n].size();i++)
		{
			f(v[n][i]);
			ans=max(ans,dp[v[n][i]]);
		}
		dp[n]=ans+1;
		return;
	}

}
int main()
{
	ll n,m;
	cin>>n>>m;
	for (ll i=0;i<m;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
	}
	for (ll i=1;i<=n;i++)
		dp[i]=-1;
	ll ma=INT_MIN;
	for (ll i=1;i<=n;i++)
	{
		f(i);
		ma=max(ma,dp[i]);
	}
	cout<<ma;
}