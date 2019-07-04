#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=998244353;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll cf=1;
	ll cb=1;
	for (ll i=0;i<n-1;i++)
	{
		if (s[i]==s[i+1])
			cf++;
		else
			break;
	}	
	for (ll i=n-1;i>0;i--)
	{
		if (s[i-1]==s[i])
			cb++;
		else
			break;
	}
	ll cm=n-(cf+cb);
	ll count=0;
	if (s[0]==s[n-1])
	{
		count=(count+cb%m*cf%m)%m;
		count+=(cb%m+cf%m+1)%m;
	}
	else
	{
		count+=(cb%m+cf%m+1)%m;
	}
	cout<<count%m;
}