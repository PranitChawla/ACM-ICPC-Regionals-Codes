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
			cin>>a[i];
		for (ll i=1;i<=n;i++)
			cin>>b[i];
		ll f=0;
		ll ma=INT_MIN;
		for (ll i=1;i<=n;i++)
		{
			if (i==1)
			{
				if (b[i]>a[2]+a[n])
				{
					f=1;
					ma=max(ma,b[i]);
				}
			}
			else if (i==n)
			{
				if (b[i]>a[n-1]+a[1])
				{
					f=1;
					ma=max(ma,b[i]);
				}
			}
			else
			{
				if (b[i]>a[i-1]+a[i+1])
				{
					f=1;
					ma=max(ma,b[i]);
				}
			}
		}
		if (f)
			cout<<ma<<endl;
		else
			cout<<-1<<endl;
	}
}
