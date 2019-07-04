#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check_split (ll a,ll b,ll c,ll x,ll y)
{
	ll k1;
	ll k2;
	k1=x-b;
	k2=a+c-y;
	if (k1==k2)
	{
		if (k1>=0&&k1<=a)
			return true;
	}
	return false;
}


int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		ll a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		if (check_split(a,b,c,x,y)||check_split(a,b,c,y,x)||check_split(a,c,b,x,y)||check_split(a,c,b,y,x)||check_split(b,a,c,x,y)||check_split(b,a,c,y,x)||check_split(b,c,a,x,y)||check_split(b,c,a,y,x)||check_split(c,a,b,x,y)||check_split(c,a,b,y,x)||check_split(c,b,a,x,y)||check_split(c,a,b,y,x))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}