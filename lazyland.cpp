#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	ll val,freq,cost;
}data;
bool compare (data a, data b)
{
	if (a.val!=b.val)
		return (a.val<b.val);
	else
		return (a.cost<b.cost);
}
bool compare2 (data a,data b)
{
	return (a.cost<b.cost);
}
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	ll b[n+1];
	ll f[k+1];
	data d[n+1];
	memset(f,0,sizeof(f));
	ll count=0;
	for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
			f[a[i]]++;
		}
	for (ll i=1;i<=k;i++)
	{
		if (f[i])
			count++;
	}
	count=k-count;
	ll k1=0;
	for (ll i=1;i<=n;i++)
	{
		cin>>b[i];
		if (f[a[i]]>1)
		{
			d[k1].val=a[i];
			d[k1].freq=f[a[i]];
			d[k1].cost=b[i];
			k1++;
		}
	}
	//cout<<k1<<endl;
	sort(d,d+k1,compare);
	data dn[n+1];
	ll j=0;
	for (ll i=0;i<k-1;i++)
	{
		if (d[i].val==d[i+1].val)
		{
			dn[j].val=d[i].val;
			dn[j].freq=d[i].freq;
			dn[j].cost=d[i].cost;
			j++;
		}
	}
	//cout<<count;
	sort(dn,dn+j,compare2);
	ll time=0;
	for (ll i=0;i<count;i++)
		time+=dn[i].cost;
	cout<<time;
}