#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		ll b[n+1];
		for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for (ll i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		if (a[1]!=0||b[n]!=0)
			cout<<"No"<<endl;
		else if (!(a[n]==b[1]))
			cout<<"No"<<endl;
		else
		{
			ll s=a[1]+b[1];
			ll f=0;
			for (ll i=2;i<=n-1;i++)
			{
				if (a[i]+b[i]<s)
				{
					f=1;
					break;
				}
			}
			if (f)
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;
		}
	}
}