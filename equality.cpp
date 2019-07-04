#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll f[26];
	// cout<<(int)'A';
	memset(f,0,sizeof(f));
	for (ll i=0;i<s.length();i++)
	{
		f[int(s[i])-65]++;
	}
	ll min=INT_MAX;
	for (int i=0;i<k;i++)
	{
		if (f[i]<min)
			min=f[i];
	}
	cout<<k*min;
}