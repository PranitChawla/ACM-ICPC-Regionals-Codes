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
	ll f[5005];
	ll ans=0;
	for (ll i=0;i<n;i++)
	{
		memset(f,0,sizeof(f));
		ll mex=1;
		for (ll j=i;j<n;j++)
		{
			if (a[j]<5005)
				f[a[j]]=1;
			while (f[mex])	
				mex++;
			ans+=mex;
		}
	}
	cout<<ans<<endl;
}