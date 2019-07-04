#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t=1;
	cin>>t;
	while (t--)
	{
		ll n,m;
		cin>>n>>m;
		ll a[n];
		ll b[m];
		int c=0;
		int d=0;
		ll sa=0;
		ll sb=0;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			if (a[i]==0)
				c=1;
			if (a[i]==1)
				sa++;
		}
		for (ll i=0;i<m;i++)
		{
			cin>>b[i];
			if (b[i]==0)
				d=1;
			if (b[i]==1)
				sb++;
		}
		if (c==1&&d==1)
		{
			cout<<"Bob"<<endl;
			continue;
		}
		else if (c==1||d==1)
		{
			cout<<"Alice"<<endl;
			continue;
		}
		if (sa==n&&sb==m)
		{
			cout<<"Bob"<<endl;
			continue;
		}
		else 
		{
			cout<<"Alice"<<endl;
			continue;	
		}
	}
}