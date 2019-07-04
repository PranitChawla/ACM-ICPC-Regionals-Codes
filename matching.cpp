#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
ll a[22][22];
ll dp [1<<22+2];
ll m=1e9+7;
void solve (ll num, ll k)
{
	if (dp[num]!=-1)
		return;
	if (num==0)
	{
		//cout<<"check"<<endl;
		dp[num]=1;
		return;
	}
	else
	{
		ll ans=0;
		//cout<<"check"<<endl;
		for (ll i=0;i<n;i++)
		{
			if (num&(1<<i))
			{
				if (k>=0)
				{
				if (a[k][i])
				{
					//cout<<num-(1<<i)<<endl;
					solve(num-(1<<i),k-1);
					ans=(ans%m+dp[num-(1<<i)]%m)%m;
				}
				}
			}
		}
		dp[num]=ans%m;
		return;
	}
}
int main()
{
	cin>>n;
	memset(dp,-1,sizeof(dp));
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	ll k=1<<n;
	ll temp=n;
	k--;
	solve(k,temp-1);
	// for (ll i=0;i<=k;i++)
	// 	cout<<dp[i]<<" ";
	cout<<dp[k]%m;
}