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
		char a[n];
		string s;
		for (ll i=0;i<n;i++)
			{
				cin>>a[i];
				s.push_back(a[i]);
			}
		if (next_permutation(s.begin(),s.end()))
			cout<<s<<endl;
		else
			cout<<-1<<endl;
	}
}