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
		if (s.length()<3)
		{
			cout<<s.length()<<endl;
			continue;
		}
		ll dp2[s.length()+4];
		memset(dp2,0,sizeof(dp2));
		for (ll i=0;i<s.length()-2;i++)
		{
			string s1=s.substr(i,3);
			sort(s1.begin(),s1.end());
			ll j=0;
			if ((s1[j]=='C'&&s1[j+1]=='C'&&s1[j+2]=='S')||(s1[j]=='C'&&s1[j+1]=='S'&&s1[j+2]=='S'))
				{
					dp2[i+2]=1;
				}
			else
			{
				dp2[i+2]=0;
			}
		}
		for (ll i=0;i<s.length();i++)
		{
			if (i-3>=0)
			{
				if (dp2[i]!=0)
					dp2[i]=dp2[i-3]+dp2[i];
			}
		}
		ll max_len=0;
		for (ll i=0;i<s.length();i++)
			{
				max_len=max(max_len,dp2[i]);
			}
		cout<<s.length()-max_len*3<<endl;
	}
}