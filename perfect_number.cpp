#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum (ll n)
{
	ll t=0;
	while (n>0)
	{
		t+=(n%10);
		n/=10;
	}
	return t;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n=1e8;
	ll k;
	cin>>k;
	ll c=0;
	ll i;
	for (i=0;i<=n;i++)
	{
		if (sum(i)==10)
			c++;
		if (c==k)
			break;
	}
	cout<<i;
}