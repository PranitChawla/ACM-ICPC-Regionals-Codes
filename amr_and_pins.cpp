#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
double dist (ll x, ll x1, ll y, ll y1)
{
	return (sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)));
}
int main()
{
	ll r,x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	if (x==x1&&y==y1)
		cout<<0<<endl;
	else
	{
		cout<<ceil(dist(x,x1,y,y1)/(2*r))<<endl;
	}

}