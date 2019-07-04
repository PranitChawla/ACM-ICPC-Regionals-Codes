#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 	ll n;
	 	cin>>n;
	 	ll a[n+1];
	 	for (ll i=1;i<=n;i++)
	 		cin>>a[i];
	 	ll dp[n+1];
	 	memset(dp,0,sizeof(dp));
	 	for (ll i=1;i<=n;i++)
	 	{
	 		if (i==1)
	 		{
	 			if (a[i]==-1)
	 				dp[i]=1;
	 			else
	 				dp[i]=0;
	 		}
	 		else
	 		{
	 			if (a[i]==-1)
	 				dp[i+1]=dp[i]+1;
	 			else
	 				dp[i+1]=dp[i];
	 		}
	 	}
	 	ll min_num=INT_MAX;
	 	for (ll i=1;i<=n;i++)
	 	{
	 		min_num=min(min_num,i-dp[i]+dp[n]-dp[i]);
	 	}
	 	cout<<min_num<<endl;
	}
}