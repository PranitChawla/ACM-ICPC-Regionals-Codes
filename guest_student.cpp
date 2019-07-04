#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>k;
		ll a[7];
		ll n=0;
		for(ll i=0;i<7;i++)
		{
			cin>>a[i];
			if(a[i])
				n++;
		}
		ll diff[n];
		ll prev=0;
		ll c=0;
		ll j=0;
		for(ll i=0;i<7;i++)
		{
			if (a[i]==1)
			{
				if (c==0)
				{
					prev=i;
					c++;
				}
				else 
				{
					diff[j++]=i-prev;
					prev=i;
				}
			}
		}
		ll sum=0;
		for (int i=0;i<j;i++)
		{
			sum+=diff[i];
		}
		diff[j]=7-(sum);
		// for (int i=0;i<j+1;i++)
		// {
		// 	cout<<diff[i]<<" ";
		// }
		sort(diff,diff+j+1);

		ll f[n+2];
		f[1]=0;
		for(ll i=1;i<=n;i++)
		{
			f[i+1]=f[i]+diff[i-1];
			//cout<<f[i+1]<<endl;
		}
		if(k==1)
			cout<<1<<endl;
		else if(k<n+1)
		{
			cout<<f[k+1]<<endl;
			continue;
		}
		else
		{
			ll ans=(k/(n+1))*8+f[(k%(n+1))+1];
			cout<<ans<<endl;
		}

	}
}