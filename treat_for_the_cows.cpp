#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp [2005][2005];	
ll calc_treat (ll beg,ll end, ll a[],ll age)
{
	if (dp[beg][end]>0)
		return dp[beg][end];
	else if (beg==end)
	{
		dp[beg][end]=a[beg]*age;
		return a[beg]*age;
	}
	else
	{
		ll ans;
		ans=max(a[beg]*age+calc_treat(beg+1,end,a,age+1),a[end]*age+calc_treat(beg,end-1,a,age+1));
		dp[beg][end]=ans;
		return ans;
	}
}
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	memset(dp,0,sizeof(dp));
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll age=1;
	cout<<calc_treat(0,n-1,a,age);
}