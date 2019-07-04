#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	ll n=s.length();
	ll sum[n];
	for (ll i=0;i<n;i++)
	{
		if (i==0)
		{
			if (s[i]=='Q')
				sum[i]=1;
			else
				sum[i]=0;
		}
		else
		{
			if (s[i]=='Q')
				sum[i]=sum[i-1]+1;
			else
				sum[i]=sum[i-1];
		}
	}
	ll ans=0;
	for (ll i=0;i<n;i++)
	{
		if (s[i]=='A')
		{
			ans=ans+sum[i]*(sum[n-1]-sum[i]);
		}
	}
	cout<<ans;

}