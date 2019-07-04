#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll f[27];
	memset(f,0,sizeof(f));
	vector < pair <char,ll> > o;
	vector < pair <char,ll> > e;
	for (ll i=0;i<s.length();i++)
	{
		f[s[i]-96]++;
	}
	for (int i=1;i<=26;i++)
	{
		if (f[i]%2)
			o.push_back(make_pair(char(96+i),f[i]));
		else if (f[i]%2==0&&f[i])
			e.push_back(make_pair(char(96+i),f[i]));
	}
	for (ll i=0;i<e.size();i++)
		cout<<e[i].first<<" ";

}