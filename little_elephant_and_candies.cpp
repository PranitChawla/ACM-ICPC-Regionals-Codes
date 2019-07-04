#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,c;
		cin>>n>>c;
		ll a[n];
		ll sum=0;
		for (ll i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			if (c>=sum)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
	}
}