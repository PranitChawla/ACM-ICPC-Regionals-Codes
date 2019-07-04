#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100004];
ll a[102];
void solve (ll k,ll n)
{
	if (dp[k]!=-1)
		return;
	else
	{
		ll mi=INT_MAX;
		for (ll i=0;i<n;i++)
			mi=min(mi,a[i]);
		if (k<mi)
		{
			dp[k]=0;
			return;
		}
		else
		{
			ll f=0;
			for (ll i=0;i<n;i++)
			{
				if (k>=a[i])
				{
					solve(k-a[i],n);
					if (dp[k-a[i]]==0)
						f=1;
				}

			}
			if (f)
				dp[k]=1;
			else
				dp[k]=0;
		}
	}
}
int main()
{
	ll n,k;
	cin>>n>>k;
	for (ll i=0;i<n;i++)
		cin>>a[i];
	//memset(dp,0,sizeof(dp));
	for (ll i=0;i<=k;i++)
		dp[i]=-1;
	solve(k,n);
	(dp[k]==1)?cout<<"First":cout<<"Second";
}