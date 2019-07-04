#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll prev=0;
	ll next=1;
	while (t<a[prev]&&prev<n)
		prev++;
	if (prev==n)
		cout<<0;
	else
	{
	ll sum=a[prev];
	ll next=prev+1;
	ll count=1;
	ll count_max=1;
	while (next<n)
	{
		sum+=(a[next]);
		count++;
		if (sum>t)
		{
			sum-=a[prev];
			count--;
			prev++;
		}
		if (count>count_max)
			count_max=count;
		next++;
	}
	cout<<count_max;
	}
}