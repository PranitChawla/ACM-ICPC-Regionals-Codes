#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	ll f[5004];
	ll c[5004];
	memset(f,0,sizeof(f));
	memset(c,0,sizeof(c));
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
		f[a[i]]++;
	}
	for (ll i=0;i<n;i++)
		{
			if (f[a[i]]>k)
			{
				cout<<"NO";
				exit(0);
			}
		}
	ll ans[n];
	memset(ans,0,sizeof(ans));
	ll t=0;
	for (ll i=0;i<n;i++)
	{
		if (!c[i])
		{
			if (t==k)
			{
			ans[i]=1;
			t=1;
			}
			else
			{
			ans[i]=t+1;
			t++;
			}
			c[i]=1;
			for (ll j=i+1;j<n;j++)
			{
				if (a[j]==a[i])
				{
					c[j]=1;
					if (t==k)
					{
						ans[j]=1;
						t=1;
					}
					else
					{
						ans[j]=t+1;
						t++;
					}
				}
			}
		}
	}
	cout<<"YES"<<endl;
	for (ll i=0;i<n;i++)
		cout<<ans[i]<<" ";
}