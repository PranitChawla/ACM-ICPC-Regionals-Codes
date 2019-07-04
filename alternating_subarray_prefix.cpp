#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100005];
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
		for (ll i=n;i>=1;i--)
		{
			if (i==n)
				dp[i]=1;
			else
			{
				if (a[i]*a[i+1]<0)
					dp[i]=dp[i+1]+1;
				else
					dp[i]=1;
			}
		}
		for (ll i=1;i<=n;i++)
			cout<<dp[i]<<" ";
		cout<<endl;
	}
}