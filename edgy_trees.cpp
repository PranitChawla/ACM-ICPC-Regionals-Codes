#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1e9+7;
ll modular_exp (ll x,ll n,ll M)
	{
		if (n==0)
			return 1;
		else if (n%2==0)
			return (modular_exp((x*x)%M,n/2,M))%M;
		else 
			return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
	}
ll root (ll arr[], ll a)
{
	while (arr[a]!=a)
		a=arr[a];
	return a;
}
bool find(ll arr[], ll a, ll b)
{
	//return (arr[a]==arr[b]);
	return (root(arr,a)==root(arr,b));
}
void uni(ll arr[],ll ma[],ll size[],ll n,ll a,ll b)
{
	// ll first=arr[a];
	// ll second=arr[b];
	// for (ll i=1;i<=n;i++)
	// {
	// 	if (arr[i]==first)
	// 		arr[i]=second;
	// }
	ll root_a=root(arr,a);
	ll root_b=root(arr,b);
	if (root_a!=root_b)
	{
	if (size[root_a]<size[root_b])
	{
		arr[root_a]=arr[root_b];
		size[root_b]+=size[root_a];
		if (ma[root_a]>ma[root_b])
		{
			ma[root_b]=ma[root_a];
		}
		else
			ma[root_a]=ma[root_b];
	}
	else
	{
		arr[root_b]=arr[root_a];
		size[root_a]+=size[root_b];	
		if (ma[root_a]>ma[root_b])
		{
			ma[root_b]=ma[root_a];
		}
		else
			ma[root_a]=ma[root_b];
	}
}
}
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	ll size[n+1];
	ll ma[n+1];
	for (ll i=1;i<=n;i++)
		{
			a[i]=i;
			size[i]=1;
			ma[i]=i;
		}
	for (ll i=0;i<n-1;i++)
	{
		ll c,d,e;
		cin>>c>>d>>e;
		if(e==0)
		uni(a,ma,size,n,c,d);
	}
	set <ll> s;
	for (ll i=1;i<=n;i++)
		s.insert(root(a,i));
	ll ans=modular_exp(n,k,mod);
	set <ll>::iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		ans=(ans-modular_exp(size[*it],k,mod)+mod)%mod;
	}
	cout<<ans%mod;
}