#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll q=n/4;
	ll r=n%4;
	for (ll i=0;i<q;i++)
	{
		cout<<"a"<<"b"<<"c"<<"d";
	}
	char t='a';
	for (ll i=0;i<r;i++)
	{
		cout<<t;
		t++;
	}
}