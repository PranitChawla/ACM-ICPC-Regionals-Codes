#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	ll b[n];
	ll sum=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	int c[n];
	for (int i=0;i<n;i++)
		c[i]=a[i]-b[i];
	sort(c,c+n);
	ll diff=sum-m;
	ll count=0;
	sum=0;
	for (ll i=n-1;i>=0;i--)
	{
		if (sum>=diff)
			break;
		sum+=c[i];
		count++;
	}
	if (sum<diff)
		cout<<-1;
	else
		cout<<count;
}