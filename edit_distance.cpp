#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[2005][2005];
int edit_distance (string s1,string s2,int m,int n)
{
	if (dp[m][n]>=0)
		return dp[m][n];
	if (m==0)
	{
		dp[m][n]=n;
		return dp[m][n];
	}
	if (n==0)
	{
		dp[m][n]=m;
		return dp[m][n];
	}
	else if (s1[m-1]==s2[n-1])
	{
		int val;
		val=edit_distance(s1,s2,m-1,n-1);
		dp[m][n]=val;
		return dp[m][n];
	}
	else
	{
		int case1;
		int case2;
		int case3;
		case1=edit_distance(s1,s2,m-1,n);
		case2=edit_distance(s1,s2,m,n-1);
		case3=edit_distance(s1,s2,m-1,n-1);
		int val;
		val=min(case1,min(case2,case3));
		dp[m][n]=1+val;
		return dp[m][n];
	}
}
int edit_distance_bottoms (string s1,string s2,int m,int n )
{
	for (int i=0;i<=m;i++)
	{
		for (int j=0;j<=n;j++)
		{
			if (i==0)
				dp[i][j]=j;
			else if (j==0)
				dp[i][j]=i;
			else if (s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else 
			{
				dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
			}
		}
	}
	return dp[m][n];
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int m=s1.length();
		int n=s2.length();
		cout<<edit_distance_bottoms(s1,s2,m,n)<<endl;
	}
}