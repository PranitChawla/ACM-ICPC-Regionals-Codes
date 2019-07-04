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
		for (ll i=0;i<n;i++)
		{
			if (s[i]=='1')
				c++;
		}
		cout<<(c+1)*c/2<<endl;
	}
}