#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (ll a,ll b)
{
	return a>b;
}
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n+1];
	ll s=0;
	for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		sort(a+1,a+n+1,compare);
		if (s<m)
			cout<<-1;
		else
		{
			ll i;
			ll start=1;
			ll end=n;
			while (start<end)
			{
			ll s=0;
			ll f=0;
			ll mid=(start+end)/2;
				for (ll j=1;j<=n;j++)
				{
					ll c=(j-1)/mid;
					ll t=a[j]-c;
					//cout<<a[j]<<" "<<c<<endl;
					ll r=0;
					if (a[j]>c)
						s+=(a[j]-c);	
					else
						break;
					if (s>=m)
					{
						f=1;
						break;
					}
				}
				if (f)
					{
						end=mid;
					}
				else
				{
					start=mid+1;
				}
			}
			cout<<end;
		}
}