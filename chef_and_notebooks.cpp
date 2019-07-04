#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll x,y,k,n;
		cin>>x>>y>>k>>n;
		ll p[n];
		ll c[n];
		int f=0;
		for (ll i=0;i<n;i++)
			{
				cin>>p[i]>>c[i];
				if (p[i]>=(x-y)&&c[i]<=k)
					f=1;
			}
			if (f)
				cout<<"LuckyChef"<<endl;
			else
				cout<<"UnluckyChef"<<endl;
	}
}