#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll c[n];
		ll t[n-1];
		ll p[n-1];
		ll cost[n];
		memset(cost,0,sizeof(cost));
		for (ll i=0;i<n;i++)
			cin>>c[i];
		for (ll i=0;i<n-1;i++)
			cin>>t[i];
		for (ll i=0;i<n-1;i++)
			cin>>p[i];
		for (ll i=0;i<n;i++)
		{
			for (ll j=0;j<i;j++)
			{
				cost[i]+=c[j];
				if (p[j]==1)
					cost[i]-=t[j];
				else
					cost[i]-=2*t[j];
			}
			cost[i]+=c[i];
		}
		// for (ll i=0;i<n;i++)
		// 	cout<<cost[i]<<" ";
		sort(cost,cost+n);
		cout<<cost[n-1]<<endl;
	}
}