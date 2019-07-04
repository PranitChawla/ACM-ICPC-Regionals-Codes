#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll dp[n+1][k+1];
	memset(dp,0,sizeof(dp));
	vector <ll> v;
	for (ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for (ll j=1;j<=k;j++)
	{
		for (ll i=0;i<n;i++)
		{
			ll p=lower_bound(v.begin(),v.end(),v[i]-5)-v.begin();
			if (p>0&&i>0)
			{
				dp[i][j]=max(dp[i-1][j],dp[p-1][j-1]+(i-p+1));
			}
			else
				dp[i][j]=i+1;
		}
	}
	cout<<dp[n-1][k];
}