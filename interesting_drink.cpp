#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	vector <ll> v;
	for (ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	ll q;
	cin>>q;
	vector <ll>::iterator it;
	for (ll i=0;i<q;i++)
	{
		ll m;
		cin>>m;
		// if (binary_search(v.begin(),v.end(),m))
		// {
		// 	it=lower_bound(v.begin(),v.end(),m);
		// 	cout<<it-v.begin()+1<<endl;	
		// }
		// else
		// {
			it=upper_bound(v.begin(),v.end(),m);
			//cout<<*it<<" ";
			cout<<it-v.begin()<<endl;
		//}
	}
}