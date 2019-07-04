#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	if (n>k*(k-1))
		cout<<"no";
	else
	{
		cout<<"yes"<<endl;
		ll c=0;
		ll f=0;
		for (ll i=1;i<k;i++)
		{
			for (ll j=i+1;j<=k;j++)
			{
				c++;
				if (c>n)
				{
					f=1;
					break;
				}
				else
				{
					cout<<i<<" "<<j<<endl;
				}
				c++;
				if (c>n)
				{
					f=1;
					break;
				}
				else
				{
					cout<<j<<" "<<i<<endl;
				}
			}
			if (f)
				break;
		}
	}
}