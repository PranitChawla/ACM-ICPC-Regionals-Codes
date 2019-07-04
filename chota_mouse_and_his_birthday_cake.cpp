#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll f,h,w;
		cin>>f>>h>>w;
		ll a[f];
		for (ll i=0;i<f;i++)
			cin>>a[i];
		sort(a,a+f);
		vector <ll> diff;
		diff.push_back(a[0]*h);
		diff.push_back((w-a[f-1])*h);
		for (ll i=0;i<f-1;i++)
		{
			diff.push_back((a[i+1]-a[i])*h);
		}
		sort(diff.begin(),diff.end());
		cout<<diff[0]<<endl;
	}
}