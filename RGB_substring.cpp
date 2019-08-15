#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll q;
	cin>>q;
	while (q--)
	{
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		string st[3];
		for (ll i=0;i<k;i++)
		{
			if (i%3==0)
				st[0].push_back('R');
			else if (i%3==1)
				st[0].push_back('G');
			else if (i%3==2)
				st[0].push_back('B');
		}
		for (ll i=0;i<k;i++)
		{
			if (i%3==0)
				st[1].push_back('G');
			else if (i%3==1)
				st[1].push_back('B');
			else if (i%3==2)
				st[1].push_back('R');
		}
		for (ll i=0;i<k;i++)
		{
			if (i%3==0)
				st[2].push_back('B');
			else if (i%3==1)
				st[2].push_back('R');
			else if (i%3==2)
				st[2].push_back('G');
		}
		// cout<<st[0]<<" "<<st[1]<<" "<<st[2]<<endl;
		ll dp[3][n+1];
		for (ll i=0;i<3;i++)
		{
			if (s[0]!=st[i][0])
				dp[i][0]=1;
			else
				dp[i][0]=0;
		}
		// for (ll i=0;i<3;i++)
		// 	cout<<dp[i][0]<<" ";
		for (ll i=0;i<3;i++)
		{
			for (ll j=1;j<n;j++)
			{
				if (j<k)
					{
						if (s[j]!=st[i][j])
							dp[i][j]=dp[i][j-1]+1;
						else
							dp[i][j]=dp[i][j-1];
					}
				else
				{
					if (s[j]!=st[i][j])
						dp[i][j]=dp[i][j-1]-dp[i][j-k]+1;
					else
						dp[i][j]=dp[i][j-1]-dp[i][j-k];
				}
			}
		}
		ll ans=INT_MAX;
		for (ll i=0;i<3;i++)
		{
			for (ll j=0;j<n;j++)
			{
				// ans=min(ans,dp[i][j]);
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<ans<<endl;
	}
}