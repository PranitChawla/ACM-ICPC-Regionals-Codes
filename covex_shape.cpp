#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,m;
	cin>>n>>m;
	string s[n];
	int k=0;
	int a[n][m];
	int count=0;
	for (int i=0;i<n;i++)
	{
		cin>>s[i];
		for (int j=0;j<s[i].length();j++)
		{
			if (s[i][j]=='W')
				a[i][j]=1;
			else
			{
				a[i][j]=0;
				count++;
			}
		}
	}
	if (count==1)
	{
		cout<<"YES";
		return 0;
	}
	else
	{
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				for (int k=0;k<n;k++)
				{
					for (int l=0;l<m;l++)
					{
						if (a[i][j]==0&&a[k][l]==0)
						{
						if (k==i)
						{
							for (int h=min(j,l);h<=max(j,l);h++)
							{
								if (a[k][h]==1)
								{
									cout<<"NO";
									return 0;
								}
							}
						}
						else if (j==l)
						{
							for (int h=min(i,k);h<=max(i,k);h++)
							{
								if (a[h][j]==1)
								{
									cout<<"NO";
									return 0;
								}
							}
						}
						else 
						{
							int flag1=0;
							int flag2=0;
							for (int h=min(j,l);h<=max(j,l);h++)
							{
								if (a[i][h]==1)
								{
									flag1=1;
									break;
								}
							}
							if (flag1==0)
							{
								for (int h=min(i,k);h<=max(i,k);h++)
							{
								if (a[h][l]==1)
								{
									flag1=1;
									break;
								}
							}
							}
							for (int h=min(j,l);h<=max(j,l);h++)
							{
								if (a[k][h]==1)
								{
									flag2=1;
									break;
								}
							}
							if (flag2==0)
							{
								for (int h=min(i,k);h<=max(i,k);h++)
							{
								if (a[h][j]==1)
								{
									flag2=1;
									break;
								}
							}
							}
							if (flag1==1&&flag2==1)
							{
								cout<<"NO";
								return 0;
							}
						}
					}
				}
			}
		}
	}
		cout<<"YES";
		return 0;
	}

}