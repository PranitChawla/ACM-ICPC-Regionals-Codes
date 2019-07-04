#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll w,h;
	cin>>w>>h;
	ll n=2;
	ll total=0;
	for (ll i=1;i<=w;i+=1)
	{
		for (ll j=1;j<=h;j+=1)
			total+=min(i,w-i)*min(j,h-j);
	}
	cout<<total;
}