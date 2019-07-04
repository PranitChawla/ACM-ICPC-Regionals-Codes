#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
			ll a,b,c,d,e,f,l,r;
			cin>>a>>b>>c>>d>>e>>f>>l>>r;
			if (c>f)
			{
				ll num,den;
				num=2*(a-d)*(r*r*r-l*l*l)+3*(b-e)*(r*r-l*l)+6*(c-f)*(r-l);
				den=6;
				ll g=__gcd(num,den);
				num/=g;
				den/=g;
				cout<<num<<"/"<<den<<endl;
			}
			else
			{
				ll num,den;
				num=2*(d-a)*(r*r*r-l*l*l)+3*(e-b)*(r*r-l*l)+6*(f-c)*(r-l);
				den=6;
				ll g=__gcd(num,den);
				num/=g;
				den/=g;
				cout<<num<<"/"<<den<<endl;
			}
	}
}