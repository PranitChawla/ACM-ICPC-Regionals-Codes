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
		char c;
		cin>>n;;
		string s;
		cin>>s;
		cin>>c;
		ll ans=0;
		ll f=0;
		vector <ll> v;
		for (ll i=0;i<n;i++)
		{
			if (s[i]==c)
			{
				v.push_back(i);
			}
		}
		if (v.size()==0)
		{
			cout<<0<<endl;
			continue;
		}
		for (ll i=0;i<v.size()-1;i++)
		{
			ll temp=v[i+1]-v[i];
			ans+=temp*(v[i]+1);
		}
		ans+=(v[v.size()-1]+1)*(n-v[v.size()-1]);
		cout<<ans<<endl;
	}
}