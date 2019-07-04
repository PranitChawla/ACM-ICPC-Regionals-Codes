#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100001];
ll num (ll a[],ll n)
{
	if (dp[n]>=0)
		return dp[n];
	if (n==0)
		return 0;
	else if (n==1)
		return a[n];
	else 
	{
		ll m;
		m=max(num(a,n-1),a[n]+num(a,n-2));
		dp[n]=m;
		return m;
	}
}
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll freq[100001];
	for (ll i=1;i<=100000;i++)
		dp[i]=-1;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	memset(freq,0,sizeof(freq));
	for (ll i=1;i<=n;i++)
		freq[a[i]]++;
	for (ll i=1;i<=100000;i++)
	{
		freq[i]*=i;
	}
	ll b;
	b=num(freq,100000);
	cout<<dp[100000];	
}