#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll sum=0;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if (sum%3!=0)
	{
		cout<<0;
		return 0;
	}
	ll cnt[n+1];
	ll sums[n+1];
	ll sume[n+1];
	memset(sums,0,sizeof(sums));
	memset(sume,0,sizeof(sume));
	memset(cnt,0,sizeof(cnt));
	for (ll i=1;i<=n;i++)
	{
			if (i!=1)
			sums[i]=sums[i-1]+a[i];
			else
				sums[i]=a[i];
	}
	for (ll i=n;i>=1;i--)
	{
			if (i!=n)
			sume[i]=a[i]+sume[i+1];
			else
				sume[i]=a[i];
	}
	vector <ll> s;
	vector <ll> e;
	for (ll i=1;i<=n;i++)
	{
		// if (sums[i]==sum/3)
		// 	s.push_back(i);
		if (sume[i]==sum/3)
			cnt[i]=1;
	}
	// for (ll i=1;i<=n;i++)
	// 	cout<<sume[i]<<" ";
	// cout<<endl;
	for (ll i=n;i>=1;i--)
	{
		if (i!=n)
		{
			cnt[i]=cnt[i]+cnt[i+1];
		}
	}
	ll tot=0;
	for (ll i=1;i<=n-2;i++)
	{
		if (sums[i]==sum/3)
		{
			tot+=cnt[i+2];
		}
	}
cout<<tot;
}