#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll x,y;
		cin>>x>>y;
		ll d=y/x;
		cout<<x<<" "<<x*d<<endl;
	}
}
