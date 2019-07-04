#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;
int main()
{
	int n,k,d;
	cin>>n>>k>>d;
	ll dp1[101];
	ll dp2[101];
	memset(dp1,0,sizeof(dp1));
	dp1[0]=1;
	memset(dp2,0,sizeof(dp2));
	dp2[0]=1;
	for (ll i=1;i<=100;i++)
	{
		for (ll j=1;j<=k;j++)
		{
			if ((i-j)<0)
				break;
			else
			{
				dp1[i]=(dp1[i]%m+dp1[i-j]%m)%m;
			}
		}
	}
	for (ll i=1;i<=100;i++)
	{
		for (ll j=1;j<=k;j++)
		{
			if ((i-j)<0)
				break;
			else if (j<d)
			{
				dp2[i]=(dp2[i]%m+dp2[i-j]%m)%m;
			}
		}
	}
	cout<<(dp1[n]-dp2[n]+m)%m;
}