#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll freq[101];
		memset(freq,0,sizeof(freq));
		ll c=0;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			freq[a[i]]++;
		}
		for (ll i=1;i<=100;i++)
		{
			if (freq[i]>=2)
				c+=(freq[i]-1);
		}
		cout<<c<<endl;
	}
}