#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[100004][6][6];
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	if(n==1)
	{
		cout<<1<<endl;
		exit(0);
	}
	memset(dp,0,sizeof(dp));
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=5;j++)
		{
			if (a[1]>a[0])
			{
				if (j>i)
					dp[0][i][j]=1;
				else 
					dp[0][i][j]=0;
			}
			else if (a[1]<a[0])
			{
				if (j<i)
					dp[0][i][j]=1;
				else 
					dp[0][i][j]=0;
			}
			else
			{
				if (j==i)
					dp[0][i][j]=0;
				else 
					dp[0][i][j]=1;
			}
		}
	}
	for (ll i=1;i<n-1;i++)
	{
		for (int j=1;j<=5;j++)
		{
			if(dp[i-1][1][j]||dp[i-1][2][j]||dp[i-1][3][j]||dp[i-1][4][j]||dp[i-1][5][j])

			{
			for (int k=1;k<=5;k++)
			{
				if (a[i+1]>a[i])
				{
					if (k>j)
					{
						dp[i][j][k]=1;
					}
					else
						dp[i][j][k]=0;
				}
				else if (a[i+1]<a[i])
				{
					if (k<j)
					{
						dp[i][j][k]=1;
					}
					else
						dp[i][j][k]=0;
				}
				else
				{
					if (k==j)
						dp[i][j][k]=0;
					else
						dp[i][j][k]=1;	
				}
			}
		}
		}
	}
	ll f=0;
	ll last=0;
	for(ll i=1;i<=5;i++)
	{
		for(ll j=1;j<=5;j++)
		{
			if(dp[n-2][i][j])
			{
				f=1;
				last=j;
			}
		}
	}
	if(f==0)
		cout<<-1<<endl;
	else
	{
		vector <ll> v;
		ll k=last;
		for (ll i=n-2;i>0;i--)
		{

				for(int j=5;j>=1;j--)
				{
					ll f=0;
					if(dp[i][j][k])
					{
						for(int j1=1;j1<=5;j1++)
						{
							if(dp[i-1][j1][j])
							{
								v.push_back(k);
							k=j;
							f=1;
							break;
							
							}

						}

					}
					if(f==1)
						break;
				}
			
		}


		for(ll j=5;j>0;j--)
		{
			if(dp[1][j][v[v.size()-1]])
			{
				v.push_back(j);
				break;
			}
		}
		for(ll j=5;j>0;j--)
		{
			if(dp[0][j][v[v.size()-1]])
			{
				v.push_back(j);
				break;
			}
		}

		for( ll i=v.size()-1;i>=0;i--)
		{
			cout<<v[i]<<" ";
		}
	}

	cout<<endl;

}