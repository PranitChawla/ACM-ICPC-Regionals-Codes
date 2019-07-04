#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll total_time=0;
	ll start=0;
	for (ll i=1;i<=n;i++)
	{
		total_time+=(a[i]-start);
		total_time++;
		if (i!=n)
		{
			if (a[i+1]<a[i])
			{
				total_time+=(a[i]-a[i+1]);
				total_time++;
				start=a[i+1];
			}
			else
			{
				total_time++;
				start=a[i];
			}
		}
	}
	cout<<total_time;
}