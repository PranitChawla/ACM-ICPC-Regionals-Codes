#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	ll b[n];
	ll o1=0;
	ll e1=0;
	ll o2=0;
	ll e2=0;
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]&1)
			o1++;
		else
			e1++;
	}
	for (ll i=0;i<m;i++)
	{
		cin>>b[i];
		if (b[i]&1)
			o2++;
		else
			e2++;
	}
	if (max(min(o1,e2)+min(o2,e1),min(o2,e1)+min(o1,e2))>n)
		cout<<n;
	else
	cout<<max(min(o1,e2)+min(o2,e1),min(o2,e1)+min(o1,e2)) 
	//cout<<max(min(o1,e2)+min(o2,e1),min(o2,e1)+min(o1,e2));
}