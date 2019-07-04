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
	ll diff[n];
	ll zer=0;
	ll zerd=0;
	for (ll i=0;i<n;i++)
	{
		ll le=floor(sqrt(a[i]));
		ll up=ceil(sqrt(a[i]));
		diff[i]=min(abs(le*le-a[i]),abs((up*up)-a[i]));
		if (!a[i])
			zer++;
		if (!diff[i])
			zerd++;
	}
	ll sum=0;
	ll extra=0;
	sort(diff,diff+n);
	for (ll i=0;i<n/2;i++)
		sum+=diff[i];
	if (zerd>n/2)
		extra=zerd-n/2;
	sum+=extra;
	if (zer>n/2)
		sum+=(zer-n/2);
	cout<<sum<<endl;

}