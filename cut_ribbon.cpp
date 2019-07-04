#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll dp[n+1];
	//memset(dp,0,sizeof(dp));
	 for (ll i=0;i<=n;i++)
	 	dp[i]=-4687;
	 dp[0]=0;
	for (ll i=1;i<=n;i++)
	{
		ll c1=i-a;
		ll c2=i-b;
		ll c3=i-c;
		
		ll ans=-1;
		if (c1>=0)
			ans=max(dp[c1]+1,ans);
		if (c2>=0)
			ans=max(dp[c2]+1,ans);
		if (c3>=0)
			ans=max(dp[c3]+1,ans);
		// cout<<ma<<" ";
		if (ans>-1)
		dp[i]=ans;
		// else if (ma==0)
		// 	dp[i]=0;
		//cout<<dp[i]<<" ";
	}
	 cout<<dp[n];
}