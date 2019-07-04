#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	map <string,ll> m;
	while (t--)
	{
		string s;
		// while (cin>>s)
		// {
		cin>>s;
		if (m.find(s)==m.end())
		{
			m.insert(make_pair(s,1));
		}
		else
		{
			ll c;
			c=(m.find(s))->second;
			c++;
			m.erase(s);
			m.insert(make_pair(s,c));
		}
		// for (ll i=0;i<m.size();i++)
		// 	cout<<m[i].first<<" "<<m[i].second<<endl;
		}
		map <string,ll>::iterator it;
		ll tot=0;
		for (it=m.begin();it!=m.end();it++)
		{
			tot+=it->second;
			// cout<<it->first<<" "<<it->second<<endl;
		}
		for (it=m.begin();it!=m.end();it++)
		{
			//tot+=it->second;
			cout<<it->first<<" "<<(double)it->second/(double)tot*100<<endl;
		}
	//}
}