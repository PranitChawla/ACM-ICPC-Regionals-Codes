#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,q;
	cin>>n>>q;
	ll a[n+1];
	ll b[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	for (ll i=1;i<=n;i++)
		cin>>b[i];
	for (ll i=0;i<q;i++)
	{
		int temp;
		cin>>temp;
		if (temp==1)
		{
			ll l,r;
			cin>>l>>r;
			ll count=0;
			ll sum=0;
			for (ll j=l;j<=r;j++)
			{
				if (count%2==0)
				{
					sum+=a[j];
				}
				else
					sum+=b[j];
				count++;
			}
			cout<<sum<<endl;
		}
		if (temp==2)
		{
			ll l,r;
			cin>>l>>r;
			ll count=0;
			ll sum=0;
			for (ll j=l;j<=r;j++)
			{
				if (count%2==0)
				{
					sum+=b[j];
				}
				else
					sum+=a[j];
				count++;
			}
			cout<<sum<<endl;
		}
	}
}