#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1004];
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int h[n];
		int k[n];
		for (int i=0;i<n;i++)
		{
			cin>>h[i];
			h[i]*=2;
		}
		for (int i=0;i<n;i++)
			cin>>k[i];
		for (int i=0;i<=1004;i++)
			dp[i]=INT_MAX;
		dp[0]=0;
		for (int i=1;i<1004;i++)
		{
			for (int j=0;j<n;j++)
			{
				if (k[j]<=i)
				{
              int sub_res = dp[i-k[j]]; 
              	if (sub_res != INT_MAX && sub_res + 1 < dp[i]) 
                  dp[i] = sub_res + 1; 
              //dp[i]=min(dp[i],dp[i-k[j]]+1);
          		} 
				}
		}
			// cout<<dp[i]<<" ";
		int mi=0;
		for (int i=0;i<n;i++)
		{
			mi+=(dp[h[i]]);
		}
		cout<<mi<<endl;
	}
}