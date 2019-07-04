#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n+1][n+1];
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=n;j++)
				cin>>a[i][j];
		}
		int dp[105][105];
		dp[1][1]=0;
		for (int i=2;i<=n;i++)
			dp[i][1]=dp[i-1][1]+a[i][1];
		for (int j=2;j<=n;j++)
			dp[1][j]=dp[1][j-1]+a[1][j];
		for (int i=2;i<=n;i++)
		{
			for (int j=2;j<=n;j++)
			{
				dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i][j-1]);
			}
		}
		if (dp[n][n]<0)
			cout<<"Bad Judges"<<endl;
		else
		{
			double ans;
			ans=(double)(dp[n][n])/(double)(2*(n-1)-1);
			printf("%0.6f",ans);
			cout<<endl;
		}
	}
}