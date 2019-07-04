#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll p=a;
	ll q=b-1;
	ll r=c-2;
	if (p<=q&&p<=r)
	{
		cout<<(a+a+1+a+2);
	}
	else if (q<=p&&q<=r)
	{
		cout<<(3*q+3);
	}
	else if (r<=q&&r<=p)
	{
		cout<<(3*r+3);
	}
}