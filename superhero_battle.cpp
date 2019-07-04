#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll H,n;
	cin>>H>>n;
	ll a[n+1];
	ll sum[n+1];
	ll mi=1e18;
	memset(sum,0,sizeof(sum));
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (i==1)
			sum[i]=a[i];
		else
			sum[i]=sum[i-1]+a[i];
		mi=min(mi,sum[i]);
	}
	ll sum1=0;
	ll f=0;
	ll i;
	for (i=1;i<=n;i++)
	{
		sum1+=a[i];
		if (H+sum1<=0)
		{
			//cout<<"check"<<endl;
			f=1;
			break;
		}
	}
	if (f)
		cout<<i;
	else
	{
		if (sum1>=0)
			cout<<-1;
		else
		{
			ll k=ceil((double)(H+mi)/-sum[n]);
			H=H+k*sum[n];
			ll i;
			for (i=1;i<=n;i++)
			{
				if (H+sum[i]<=0)
				{
					break;
				}
			}
			cout<<k*n+i;
		}
	}
}