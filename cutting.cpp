#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[102][102];
int main()
{
	ll n,b;
	cin>>n>>b;
	ll a[n+1];
	ll c[n+1];
	ll sum[n+1];
	vector <ll> v;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		c[i]=a[i];
		(a[i]%2==1)?a[i]=-1:a[i]=1;
		if (i==1)
			sum[i]=a[i];
		else
			sum[i]=sum[i-1]+a[i];
	}
	for (ll i=1;i<n;i++)
	{
			//cout<<sum[i]<<endl;
			if (sum[i]==0)
			{
				v.push_back(abs(c[i+1]-c[i]));
				//cout<<v[i-1]<<endl;
			}
	}
		for (ll i=0;i<=b;i++)
			dp[0][i]=0;
		for (ll i=1;i<=v.size();i++)
		{
			for (ll j=0;j<=b;j++)
			{
				if (j>=v[i-1])
				{
					dp[i][j]=max(dp[i-1][j],1+dp[i-1][j-v[i-1]]);
				}
				else
					dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[v.size()][b];
	}






