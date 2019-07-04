#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		string s[n];
		for (ll i=0;i<n;i++)
			cin>>s[i];
		ll j=0;
		set <string> phrases;
		for (ll i=0;i<k;i++)
		{
			ll t;
			cin>>t;
			for (ll m=0;m<t;m++)
			{
				string s;
				cin>>s;
				phrases.insert(s);
			}
		}
		set <string>::iterator it;
		// cout<<phrases.size()<<endl;
		// for (it=phrases.begin();it!=phrases.end();it++)
		// 	cout<<*it<<endl;
		bool res[n];
		memset(res,0,sizeof(res));
		for (ll i=0;i<n;i++)
		{
			if (phrases.find(s[i])!=phrases.end())
			{
				res[i]=1;
			}
		}
		for (ll i=0;i<n;i++)
		{
			if (res[i])
				cout<<"YES"<<" ";
			else
				cout<<"NO"<<" ";
		}
		cout<<endl;
	}
}