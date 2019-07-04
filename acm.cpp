#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		vector <ll> diff;
		for (ll i=0;i<n;i++)
		{
			if (a[i]>k)
			{
				diff.push_back(a[i]-k);
			}
		}
		ll sum=0;
		for (ll i=0;i<diff.size();i++)
			sum+=diff[i];
		if (sum>a[n-2])
		{
			if (sum%2)
			{
				a[n-1]--;
			}
		}
		else
		{
			a[n-1]=a[n-1]-(a[n-2]-sum);
		}
		sum=0;
		for (ll i=0;i<n;i++)
		{
			if (i<n-1)
				sum+=k;
			else
				sum+=a[n-1];
		}
		cout<<sum<<endl;
}
}