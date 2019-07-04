#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	if (c>0)
	{
		if (a>=1&&d>=1)
		{
			if (a==d)
				cout<<1;
			else
				cout<<0;
		}
		else
			cout<<0;
	}
	else
	{
		if (a==d)
			cout<<1;
		else
			cout<<0;
	}

}