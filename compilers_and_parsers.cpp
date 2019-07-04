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
		stack <char> q;
		ll count=0;
		for (ll i=0;i<s.length();i++)
		{
			if (s[i]=='>'&&q.empty())
				break;
			else
			{
				if  (s[i]=='<')
					q.push(s[i]);
				else
				{
					q.pop();
					count=count+2;
				}
			}
		}
		cout<<count<<endl;
	}
}