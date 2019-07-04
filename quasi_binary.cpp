#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v;
vector <ll> v2;
ll dp[1000005];
ll dp2[1000005];
void solve (ll n)
{
	if (dp[n]!=-1)
	return;
	else
	{
		if (n<0)
			return;
		if (n==0)
		{
			dp[n]=0;
			return;
		}
		else
		{
			ll ans=INT_MAX;
			ll min_ans;
			for (ll i=0;i<v.size();i++)
			{
				//cout<<v[i]<<endl;
				if (n>=v[i])
				{	
				solve(n-v[i]);
				if (dp[n-v[i]]+1<ans)
				{
					ans=dp[n-v[i]]+1;
					min_ans=i;
				}
				}
			}
			//cout<<min_ans<<endl;
			dp[n]=ans;
			dp2[n]=min_ans;
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	for (ll i=1;i<=n;i++)
	{
		ll temp=i;
		ll f=0;
		while (temp>0)
		{
			ll t=temp%10;
			temp/=10;
			if (!(t==0||t==1))
			{
				f=1;
				break;
			}
		}
		if (f)
			continue;
		else
			v.push_back(i);
	}
	// solve(n);
	// cout<<dp2[n];
	dp[0]=0;
	for (ll i=1;i<=n;i++)
	{
				ll ans=INT_MAX;
				ll min_ans;
		for (ll j=0;j<v.size();j++)
		{
			if (i>=v[j])
			{
				if (dp[i-v[j]]+1<ans)
				{
					ans=dp[i-v[j]]+1;
					min_ans=j;
				}
			}
		}
		dp[i]=ans;
		dp2[i]=min_ans;
	}
	cout<<dp[n]<<endl;
	while (n>0)
	{
		cout<<v[dp2[n]]<<" ";
		n-=v[dp2[n]];
	}
	// for (ll i=0;i<v2.size();i++)
	// 	cout<<v2[i]<<" ";
}