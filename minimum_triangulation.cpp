#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll i=1;
	ll j=2;
	ll k=3;
	ll ans=0;
	while (k<=n)
	{
		ans+=i*j*k;
		j++;
		k++;
	}
	cout<<ans;
}