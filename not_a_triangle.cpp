#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	while (1)
	{
		ll n;
		cin>>n;
		if (!n)
			break;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		// sort(a,a+n);
		vector <ll> v;
		for (ll i=0;i<n-1;i++)
		{
			for (ll j=i+1;j<n;j++)
				v.push_back(a[i]+a[j]);
		}
		ll count=0;
		sort(v.begin(),v.end());
		for (int i=0;i<n;i++)
		{
			count+=(lower_bound(v.begin(),v.end(),a[i])-v.begin());
		}
		cout<<count<<endl;
	}
}