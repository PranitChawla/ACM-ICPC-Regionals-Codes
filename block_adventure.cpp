#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,m,k,f;
		f=0;
		cin>>n>>m>>k;
		ll a[n+1];
		for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for (ll i=1;i<n;i++)
		{
			// cout<<m<<endl;
			ll diff=abs(a[i]-a[i+1]);
			if (a[i]>=a[i+1])
				{
					m+=(a[i]-max((ll)0,(a[i+1]-k)));
				}
			else
			{
				if (diff<=k)
				{
					m+=(a[i]-max((ll)0,(a[i+1]-k)));
				}
				else 
				{
					ll ex=a[i+1]-k;
					if (ex-a[i]<=m)
					{
						m-=(ex-a[i]);
					}
					else
					{
						f=1;
						cout<<"NO"<<endl;
						break;
					}
				}
			}
		}
		if (!f)
			cout<<"YES"<<endl;
	}
}