#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n,m;
		cin>>n>>m;
		vector <ll> l;
		vector <ll> h;
		ll r[m];
		for (ll i=0;i<n;i++)
		{
			ll a,b;
			cin>>a>>b;
			l.push_back(a);
			h.push_back(b);
			//cout<<a<<" "<<b<<endl;
		}
		for (ll i=0;i<m;i++)
		{
			cin>>r[i];
		}
		sort(l.begin(),l.end());
		sort(h.begin(),h.end());
		ll max1=*(h.end()-1);
		ll min1=*(l.begin());
		for (ll i=0;i<m;i++)
		{
			vector <ll>::iterator it,it2,it1,it3;
			it=lower_bound(l.begin(),l.end(),r[i])-l.begin();
			ll d=it-l.begin();
			it2=h.begin()+d;
			it1=upper_bound(l.begin(),l.end(),r[i])-l.begin();
			ll d1=it1-l.begin();
			it3=h.begin()+d1;
			ll a,b,c;
			a=*it;
			b=*it1;
			c=*it2;
			cout<<"the data is "<<r[i]<<endl;
			cout<<a<<" "<<c<<endl;
			cout<<b<<endl;
			// cout<<a.first<<" "<<a.second<<endl;
			// cout<<b.first<<" "<<b.second<<endl;
			if (binary_search(l.begin(),l.end(),r[i]))
			{
				cout<<0<<endl;
				continue;
			}
			else if (c>r[i])
			{
				cout<<0<<endl;
				continue;
			}
			else if (r[i]>max1)
			{
				cout<<-1<<endl;;
				continue;
			}
			else if (r[i]<min1)
			{
				cout<<min1-r[i]<<endl;
				continue;
			}
			else
			{
					cout<<b-c<<endl;
					continue;
			}
		}
	}
}


