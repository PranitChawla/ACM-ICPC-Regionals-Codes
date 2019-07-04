#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[150004];
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
void uni(ll arr[],ll size[],ll n,ll a,ll b)
{
	//cout<<"check"<<endl;	
	ll root_a=root(arr,a);
	ll root_b=root(arr,b);
	if (root_a!=root_b)
	{
	if (size[root_a]<size[root_b])
	{
		arr[root_a]=arr[root_b];
		size[root_b]+=size[root_a];
		//cout<<root(arr,a)<<endl;
		for (ll i=0;i<v[root_a].size();i++)
		v[root_b].push_back(v[root_a][i]);
	}
	else
	{
		arr[root_b]=arr[root_a];
		size[root_a]+=size[root_b];	
		//cout<<root(arr,b)<<endl;
		for (ll i=0;i<v[root_b].size();i++)
		v[root_a].push_back(v[root_b][i]);
	}
	}
}
int main()
{
	ll n;
	cin>>n;
	ll arr[n+1];
	ll size[n+1];
	for (ll i=1;i<=n;i++)
		{
			arr[i]=i;
			size[i]=1;
			v[i].push_back(i);
		}
	for (ll i=0;i<n-1;i++)
	{
		ll c,d;
		cin>>c>>d;
		uni(arr,size,n,c,d);
	}
	for (ll i=0;i<v[root(arr,1)].size();i++)
		cout<<v[root(arr,1)][i]<<" ";
		
}