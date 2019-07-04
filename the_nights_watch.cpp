#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll c=0;
		if (n==1)
		{
			if (s[0]=='0')
			cout<<1<<endl;
			else
			cout<<0<<endl;
			continue;
		}
		for (ll i=0;i<n;i++)
		{
			if (i==0)
			{
				if (s[i]=='0')
				{
					if (s[i+1]=='0')
					{
						s[i]='1';
						c++;
					}
				}
			}
			else if (i==n-1)
			{
				if (s[i]=='0')
				{
					if (s[i-1]=='0')
					{
						s[i]='1';
						c++;
					}
				}
			}
			else
			{
				if (s[i]=='0')
				{
					if (s[i-1]=='0'&&s[i+1]=='0')
					{
						c++;
						s[i]='1';
					}
				}
			}
		}
		cout<<c<<endl;
	}
}