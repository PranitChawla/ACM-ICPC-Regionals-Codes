#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,d,e,f,x,y,z;
	cin>>x>>a>>b>>c>>y>>d>>e>>f>>z;
	y=((a+b)+(e+f)-(c+d))/2;
	x=((e+f)+(c+d)-(a+b))/2;
	z=(c+d+a+b-(e+f))/2;
	cout<<x<<" "<<a<<" "<<b<<endl;
	cout<<c<<" "<<y<<" "<<d<<endl;
	cout<<e<<" "<<f<<" "<<z<<endl;
}