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
			if (i%2==0)
			{
				if (s[i]==s[i+1])
				{
					f=1;
					break;
				}
			}
		}
		if (f)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
}