#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll b[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	b[0]=0;
	for (ll i=1;i<n;i++)
		cin>>b[i];
	ll sum=0;
	// for (ll i=1;i<n;i++)
	// {
	// 	b[i]+=(b[i-1]+a[i-1]);
	// 	//cout<<b[i]<<endl;
	// }
	for (ll i=0;i<n-1;i++)
	{
		sum+=(5*a[i]+b[i+1]);
	}
	sum+=4*a[n-1];
	// for (ll i=0;i<n;i++)
	// 	sum+=(4*a[i]+2*b[i]);
	cout<<sum;
}