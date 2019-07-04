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
		int f=0;
		for (ll i=0;i<s.length()-1;i++)
		{
			if (s[i]!=s[i+1])
			{
				f=1;
				break;
			}
		}
		if (!f)
			cout<<-1<<endl;
		else
		{
			sort(s.begin(),s.end());
			cout<<s<<endl;
		}
	}
}