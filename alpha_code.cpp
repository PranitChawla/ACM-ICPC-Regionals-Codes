#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll calc_decodings (ll key, string s, ll n)
{
	if (key>=n)
		return 0;
	if (key==n-1)
	{
		if (s[key]-'0')
			return 1;
	}
	if (key==n-2)
	{
		int tens=(s[key]-'0')*10+(s[key+1]-'0');
		int ones=s[key+1]-'0';
		if (tens<=26&&ones)
		{
			if (s[key]-'0')
			return 2;
			else
			return 1;
		}
		else if (tens>26&&ones)
			return 1;
		else if (tens<=26&&!ones)
			return 1;
	}
	else
	{
		int ones=s[key]-'0';
		int tens=(s[key]-'0')*10+(s[key+1]-'0');
		// cout<<ones<<" "<<tens<<endl;
		// ll ans1=0;
		// ll ans2=0;
		if (ones&&tens>26)
			return (calc_decodings(key+1,s,n));
		else if (tens<=26&&!ones)
			return (calc_decodings(key+2,s,n));
		else if (tens<=26&&ones)
			return (calc_decodings(key+1,s,n)+calc_decodings(key+2,s,n));
	}
}
int main()
{
	// while (1)
	// {
		string s;
		cin>>s;
		ll ans;
		ll n=s.length();
		ll key=0;
		ans=calc_decodings(key,s,n);
		cout<<ans<<endl;
	// }
}