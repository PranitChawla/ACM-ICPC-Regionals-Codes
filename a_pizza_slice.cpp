#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll T;
	cin>>T;
	while (T--)
	{
		ll n,t,x,y,z;
		cin>>n>>t>>x>>y>>z;
		ll num,den;
		ll alpha=2*n+1;
		if (t==1)
		{
			if (x==z)
			{
				ll g=__gcd(x,alpha);
				num=x/g;
				den=alpha/g;
			}
			else
			{
				ll g=__gcd(alpha-z,alpha);
				num=(alpha-z)/g;
				den=alpha/g;
			}
		}
		else if (t==2)
		{
			ll g=__gcd(alpha-(x+z),alpha);
			num=(alpha-(x+z))/g;
			den=alpha/g;
		}
		else if (t==3)
		{
			if (x==z)
			{
				ll g=__gcd(x,alpha);
				num=x/g;
				den=alpha/g;
			}
			else
			{
				ll g=__gcd(alpha-x,alpha);
				num=(alpha-x)/g;
				den=alpha/g;
			}
		}
		else
		{
			ll g=__gcd(alpha-(x+z),alpha);
			num=(alpha-(x+z))/g;
			den=alpha/g;
		}
		cout<<num<<" "<<den<<endl;
	}
}