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
		stack <ll> s;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int f=0;
		for (ll i=0;i<n;i++)
		{
			if (a[i]==1)
				s.push(1);
			else
			{
				if (s.empty())
				{
					f=1;
					break;
				}
				else
				{
					s.pop();
				}
			}
		}
		if (f)
			cout<<"Invalid"<<endl;
		else
			cout<<"Valid"<<endl;
	}
}