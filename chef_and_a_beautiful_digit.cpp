#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		ll d;
		cin>>d;
		for (ll k=0;k<s.length();k++)
		{
		ll i;
		ll f=0;
		for (i=0;i<s.length()-1;i++)
		{
			if (s[i]>s[i+1])
			{
				f=1;
				break;
			}
		}
		if (!f)
		{
		if (s[s.length()-1]>d+'0')
			{
				f=1;
				i=s.length()-1;
			}
		}
		if (f)
		{	
		for (ll j=i+1;j<s.length();j++)
		{
			s[j-1]=s[j];
		}
		s[s.length()-1]=d+'0';
		}
		}
		cout<<s<<endl;
	}
}