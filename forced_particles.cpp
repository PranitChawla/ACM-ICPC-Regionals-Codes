#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		int n,m;
		cin>>n>>m;
		string s[n];
		for (int i=0;i<n;i++)
			cin>>s[i];
		int a[n][m];
		int count_row[n];
		int count_col[m];
		for (int i=0;i<n;i++)
			count_row[i]=0;
		for (int i=0;i<m;i++)
			count_col[i]=0;
		string::iterator it;
		for (int i=0;i<n;i++)
		{
			int j=0;
			for (it=s[i].begin();it!=s[i].end();it++)
			{
				int val;
				val=(int)*it-48;
				a[i][j]=val;
				if (val)
				{
					count_row[i]++;
					count_col[j]++;
				}
				j++;
			}
		}
		// for (int i=0;i<m;i++)
		// 	cout<<count_col[i]<<" ";
		string force;
		cin>>force;
		for (it=force.begin();it!=force.end();it++)
		{
			if (*it=='L')
			{
				for (int i=0;i<n;i++)
				{
					for (int j=0;j<m;j++)
					{
						if (j<count_row[i])
							a[i][j]=1;
						else
							a[i][j]=0;
					}
				}
			}
			if (*it=='R')
			{
				for (int i=0;i<n;i++)
				{
					for (int j=m-1;j>=0;j--)
					{
						if (j>=m-count_row[i])
							a[i][j]=1;
						else
							a[i][j]=0;
					}
				}
			}
			if (*it=='U')
			{
				for (int j=0;j<m;j++)
				{
					for (int i=0;i<n;i++)
					{
						if (i<count_col[j])
							a[i][j]=1;
						else
							a[i][j]=0;
					}
				}
			}
			if (*it=='D')
			{
				for (int j=0;j<m;j++)
				{
					for (int i=n-1;i>=0;i--)
					{
						if (i>=n-count_col[j])
							a[i][j]=1;
						else
							a[i][j]=0;
					}
				}
			}
			for (int i=0;i<n;i++)
				count_row[i]=0;
			for (int i=0;i<m;i++)
				count_col[i]=0;
			for (int i=0;i<n;i++)
			{
				for (int j=0;j<m;j++)
				{
					if (a[i][j]==1)
					{
						count_row[i]++;
						count_col[j]++;
					}
				}
			}
		}
		string s2[n];
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
				{
					s2[i].push_back((char)(a[i][j]+48));
				}
		}
		for (int i=0;i<n;i++)
			cout<<s2[i]<<endl;
	}
}