#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (ll a, ll b)
{
	return a>b;
}
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	vector <ll> v;
	for (ll i=0;i<n-1;i++)
	{
		v.push_back(a[i+1]-a[i]-1);
	}
	ll ans=a[n-1]-a[0]+1;
	sort(v.begin(),v.end(),compare);
	// for (ll i=0;i<v.size();i++)
	// 	cout<<v[i]<<" ";
	for (ll i=0;i<k-1;i++)
		ans-=v[i];
	cout<<ans;
}