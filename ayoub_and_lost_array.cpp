#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[200004][3];
ll m=1000000007;
int main()
{
	ll n,l,r;
	cin>>n>>l>>r;
	ll a,b,c;
	ll tot=r-l+1;
	a=tot/3;
	b=tot/3;
	c=tot/3;
	if (tot%3==1)
	{
		if (r%3==0)
			a++;
		else if (r%3==1)
			b++;
		else if (r%3==2)
			c++;
	}
	else if (tot%3==2)
	{
		if (r%3==0)
			{
				a++;
				c++;
			}
		else if (r%3==1)
		{
			b++;
			a++;
		}
		else if (r%3==2)
		{
			c++;
			b++;
		}
	}
	memset(dp,0,sizeof(dp));
	dp[1][0]=a;
	dp[1][1]=b;
	dp[1][2]=c;
	for (ll i=2;i<=n;i++)
	{
		dp[i][0]=(dp[i-1][0]%m*a%m+dp[i-1][1]%m*c%m+dp[i-1][2]%m*b%m)%m;
		dp[i][1]=(dp[i-1][0]%m*b%m+dp[i-1][1]%m*a%m+dp[i-1][2]%m*c%m)%m;
		dp[i][2]=(dp[i-1][0]%m*c%m+dp[i-1][1]%m*b%m+dp[i-1][2]%m*a%m)%m;
	}
	cout<<dp[n][0];
}