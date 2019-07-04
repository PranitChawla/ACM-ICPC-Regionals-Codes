#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,m;
		cin>>n>>m;
		ll x1,x2,x3,x4,y1,y2,y3,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		ll x5,y5,x6,y6;
		x5=max(x1,x3);
		y5=max(y1,y3);
		x6=min(x2,x4);
		y6=min(y2,y4);
		ll white=y2-y1+x2-x1+2;
		ll black=y4-y3+y2-y1+2;
		ll common;
		if (x5>x6||y5>y6)
		{
			common=0;
			cout<<white-common<<endl;
			cout<<black+common<<endl;
		}
		else
		{
			common=y6-y5+x6-x5+2;
			cout<<white-common<<endl;
			cout<<black<<endl;
		}
	}
}