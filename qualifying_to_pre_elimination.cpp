#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (ll a,ll b)
{
	return a>b;
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n+1];
		for (ll i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1,compare);
		ll el=a[k];
		ll c=0;
		for (ll i=1;i<=n;i++)
		{
			if (a[i]>=el)
				c++;
		}
		cout<<c<<endl;
	}
}