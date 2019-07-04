#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[2004][2004];
ll m=1000000007;
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	memset(dp,0,sizeof(dp));
	for (ll i=1;i<=n;i++)
		dp[1][i]=1;
	set <ll> v[2004];
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=sqrt(i);j++)
		{
			if (i%j==0)
			{
				v[i].insert(j);
				v[i].insert(i/j);
			}
		}
	}

	set <ll>::iterator it;
	for (ll i=2;i<=k;i++)
	{
		for (ll j=1;j<=n;j++)
		{
			for (it=v[j].begin();it!=v[j].end();it++)
			{
				dp[i][j]=(dp[i-1][*it]%m+dp[i][j]%m)%m;
			}
		}
	}
	ll ans=0;
	for (ll i=1;i<=n;i++)
		ans=(ans%m+dp[k][i]%m)%m;
	cout<<ans;

}