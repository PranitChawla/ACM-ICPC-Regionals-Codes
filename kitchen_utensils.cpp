#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	ll f[101];
	ll maxf=INT_MIN;
	memset(f,0,sizeof(f));
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
		f[a[i]]++;	
	}
	for (ll i=1;i<=100;i++)
		maxf=max(maxf,f[i]);
	ll nd=ceil((double)(maxf)/(k));
	// cout<<nd;
	nd*=k;
	ll sum=0;
	for (ll i=1;i<=100;i++)
	{
		if (f[i])
		{
			sum+=(nd-f[i]);
		}
	}
	cout<<sum;
}