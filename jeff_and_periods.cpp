#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	// ll a[n+1];
	map < ll,pair <ll,ll> > table;
	for (ll i=1;i<=n;i++)
	{
		ll a;
		cin>>a;
		if (table.find(a)==table.end())
		{
			table.insert(make_pair(a,make_pair(i,0)));
		}
		else
		{
			pair <ll,ll> p;
			p=table.find(a)->second;
			if (p.second==0)
			{
				ll diff=i-p.first;
				table.erase(a);
				table.insert(make_pair(a,make_pair(i,diff)));
			}
			else
			{
				ll diff=i-p.first;
				table.erase(a);
				if (diff==p.second)
					table.insert(make_pair(a,make_pair(i,diff)));
				else
					table.insert(make_pair(a,make_pair(i,-1)));
			}
		}
	}
	map < ll, pair <ll,ll> >::iterator it;
	//cout<<table.size()<<endl;
	ll count=0;
	for (it=table.begin();it!=table.end();it++)
	{
		if (it->second.second!=-1)
			count++;
	}
	cout<<count<<endl;
	for (it=table.begin();it!=table.end();it++)
	{
		if (it->second.second!=-1)
		{
		cout<<it->first<<" "<<it->second.second;
		cout<<endl;
		}
	}
}