#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime[5004];
void sieve() 
	{
	        for(ll i = 0; i <= 5004;++i) {
	            isPrime[i] = true;
	        }
	        isPrime[0] = false;
	        isPrime[1] = false;
	        for(ll i = 2; i * i <= 5004; ++i) {
	             if(isPrime[i] == true) {                    
	                 for(ll j = i * i; j <= 5004 ;j += i)
	                     isPrime[j] = false;
	            }
	        }
	}
int main()
{
	sieve();
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll sum[n+1];
	ll dp[n+1];
	memset(dp,0,sizeof(dp));
	memset(sum,0,sizeof(sum));
	sum[1]=a[1];
	for (ll i=2;i<=n;i++)
		sum[i]=sum[i-1]+a[i];
	for (ll i=2;i<=n;i++)
	{
		dp[i]=dp[i-1];
		for (ll j=2;j<=i;j++)
		{
			if (isPrime[j])
			{
			if (i-j-1>=1)
				dp[i]=max(dp[i],sum[i]-sum[i-j]+dp[i-j-1]);
			else
				dp[i]=max(dp[i],sum[i]-sum[i-j]);
			}
		}
	}
	cout<<dp[n];
}