#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	ll dp[s.length()];
	string::iterator it;
	ll a[s.length()+1];
	ll i=1;
	for (it=s.begin();it!=s.end();it++)
	{
		a[i]=(int)(*it-48);
		i++;
	}
	ll n=s.length();
	if (a[n]%2==0)
		dp[n]=1;
	else
		dp[n]=0;
	for (ll i=n-1;i>=1;i--)
	{
		int flag;
		if (a[i]%2==0)
			flag=1;
		else
			flag=0;
		dp[i]=dp[i+1]+flag;
	}
	for (ll i=1;i<=n;i++)
		cout<<dp[i]<<" ";
}