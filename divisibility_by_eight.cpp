#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[102][9];
int main()
{
	string s;
	cin>>s;
	ll n=s.length();
	memset(dp,0,sizeof(dp));
	for (ll i=1;i<=n;i++)
	{
		dp[i][0]=1;
		for (ll j=0;j<=7;j++)
		{
			if ((j+(s[i-1]-'0')%8)%8==0)
				dp[i][j+(s[i-1]-'0')]=1;
			else
				dp[i][j+(s[i-1]-'0')]=0;
			

		}
	}
}