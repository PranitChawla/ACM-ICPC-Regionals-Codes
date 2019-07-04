#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[200004];
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll dp[n+1];
	memset(dp,0,sizeof(dp));
	for (ll i=0;i<n;i++)
	{
		if (i==0)
		{
			if (s[i]=='1')
				dp[i+1]=1;
			else
				dp[i+1]=-1;
		}
		else
		{
			if (s[i]=='1')
			{
				dp[i+1]=dp[i]+1;
			}
			else
				dp[i+1]=dp[i]-1;
		}
	}
	for (ll i=1;i<=n;i++)
	{
		v[dp[i]+n].push_back(i);
	}
	ll ma=INT_MIN;
	for (ll i=0;i<=2*n;i++)
	{
		if (v[i].size()>0)
		{
		if (i==n)
		{
			ma=max(ma,v[i][v[i].size()-1]);
		}
		else
		{
			ll temp=v[i][v[i].size()-1]-v[i][0];
			ma=max(ma,temp);
		}
		}
	}
	cout<<ma<<endl;

}