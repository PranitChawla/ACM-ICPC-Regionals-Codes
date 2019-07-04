#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[101][501];
int knapsack (int key,int weight,int n,int budget[],int fun[])
{
	for (int i=0;i<=n;i++)
	{
		for (int j=0;j<=weight;j++)
		{
			if (i==0||j==0)
				dp[i][j]=0;
			else if (budget[i-1]>j)
				dp[i][j]=dp[i-1][j];
			else 
			{
				dp[i][j]=max(fun[i-1]+dp[i-1][j-budget[i-1]],dp[i-1][j]);
			}
		}
	}
	int ma=dp[n][weight];
	int w=weight;
	int sum=0;
	int f=0;
	for (int i=n;i>0&&ma>0;i--)
	{
		if (dp[i-1][w]==ma)
			continue;
		else
		{
			ma-=fun[i-1];
			w-=budget[i-1];
			sum+=budget[i-1];
		}
	}
	return sum;
}
int main()
{
	int n,k;
	while (1)
	{
	cin>>k>>n;
	if (k==0&&n==0)
		break;
	int budget[n];
	int fun[n];
	memset(budget,0,sizeof(budget));
	memset(fun,0,sizeof(fun));
	for (int i=0;i<n;i++)
	{
		cin>>budget[i];
		cin>>fun[i];
	}
	int s;
	s=knapsack(0,k,n,budget,fun);
	cout<<s<<" "<<dp[n][k];
	}	
}