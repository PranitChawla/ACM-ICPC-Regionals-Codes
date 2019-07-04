#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	ll l,r,ind;
}data;
bool compare (data a, data b)
{
	return (a.l<b.l);
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		vector <data> v;
		for (ll i=0;i<n;i++)
		{
			ll a,b;
			cin>>a>>b;
			data d;
			d.l=a;
			d.r=b;
			d.ind=i;
			v.push_back(d);
		}
		sort(v.begin(),v.end(),compare);
		ll ans[n];
		for (ll i=0;i<n;i++)
			ans[i]=-1;
		ans[v[0].ind]=1;
		ll lm=v[0].l;
		ll rm=v[0].r;
		for (ll i=1;i<n;i++)
		{
			if (v[i].l<=rm)
			{
				ans[v[i].ind]=1;
				rm=max(rm,v[i].r);
			}
			else
			{
				ans[v[i].ind]=2;
			}
		}
		ll f=0;
		for (ll i=0;i<n;i++)
		{
			if (ans[i]==1)
			{
				f++;
			}
		}
		if (f==n)
			cout<<-1<<endl;
		else
		{
			for (ll i=0;i<n;i++)
				cout<<ans[i]<<" ";
			cout<<endl;
		}
	}
}