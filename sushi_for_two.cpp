#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll i=0;
	ll c1,c2;
	ll ans=INT_MIN;
	c1=0;
	c2=0;
	while (i<n)
	{
		if (a[i]==1)
		{
			c1=1;
			i++;
			while (a[i]==1&&i<n)
			{
				c1++;
				i++;
			}
		}
		ans=max(2*min(c1,c2),ans);
		if (a[i]==2)
		{
			c2=1;
			i++;
			while (a[i]==2&&i<n)
			{
				c2++;
				i++;
			}	
		}
		ans=max(2*min(c1,c2),ans);
		//cout<<ans<<endl;
	}
	cout<<ans;
}