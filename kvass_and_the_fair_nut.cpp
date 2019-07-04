#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll s;
	cin>>s;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll min_el=INT_MAX;
	for (ll i=0;i<n;i++)
		min_el=min(min_el,a[i]);
	ll initial=0;
	for (ll i=0;i<n;i++)
	{
		if (a[i]!=min_el)
			initial+=(a[i]-min_el);
	}
	ll left=s-initial;
	if (left<=0)
		cout<<min_el;
	else
	{
		ll max_pos=n*min_el;
		ll val=ceil((double)left/n);
		if (val>min_el)
			cout<<-1;
		else
			cout<<min_el-val;
	}
}