#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1001][1024];
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++)
			cin>>a[i];
		memset(dp,0,sizeof(dp));
		dp[0][0]=1;
		if (n==1)
		{
			cout<<max(k,k^a[0])<<endl;
			continue;
		}
		for (int i=1;i<n;i++)
		{
			for (int j=0;j<=1023;j++)
			{
				dp[i][j]=dp[i-1][j]|dp[i-1][j^a[i]];
				cout<<dp[i][j]<<" ";
			}
		}
		//cout<<k<<endl;
	int ma=INT_MIN;
	for (int i=0;i<=1023;i++)
		if (dp[n-1][i])
		{
		ma=max(ma,(k^i));
		}
	cout<<ma<<endl;
	}
}