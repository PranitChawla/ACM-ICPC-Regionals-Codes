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
		string s[n];
		int right[n][n];
		int up[n][n];
		for (int i=0;i<n;i++)
			cin>>s[i];
		for (int i=0;i<n;i++)
		{
			for (int j=n-1;j>=0;j--)
			{
				if (j==n-1)
				{
					if (s[i][j]=='#')
						right[i][j]=1;
					else
						right[i][j]=0;
				}
				else
				{
					if (s[i][j]=='#'||right[i][j+1]==1)
						right[i][j]=1;
					else
						right[i][j]=0;
				}
			}
		}
		for (int i=0;i<n;i++)
		{
			for (int j=n-1;j>=0;j--)
			{
				if (j==n-1)
				{
					if (s[j][i]=='#')
						up[j][i]=1;
					else
						up[j][i]=0;
				}
				else
				{
					if (s[j][i]=='#'||up[j+1][i]==1)
						up[j][i]=1;
					else
						up[j][i]=0;
				}
			}
		}
		ll count=0;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				if (right[i][j]==0&&up[i][j]==0)
					count++;
			}
		}
		cout<<count<<endl;
	}
}