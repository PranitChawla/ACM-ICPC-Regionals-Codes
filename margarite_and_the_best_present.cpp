#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll calc_sum (ll r)
{
	if (r==0)
		return 0;
	else if (r==1)
		return -1;
	else if (r%2==0)
	{
		r/=2;
		return (r*(r+1)-(r)*(r));
	}
	else
		return ((r*r-1)/4-(r+1)*(r+1)/4);
}
int main()
{
	ll q;
	cin>>q;
	for (ll i=0;i<q;i++)
	{
		ll l,r;
		cin>>l>>r;
		cout<<calc_sum(r)-calc_sum(l-1)<<endl;
	}
}