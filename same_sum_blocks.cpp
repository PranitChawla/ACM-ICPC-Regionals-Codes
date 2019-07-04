#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n;
	cin>>n;
	ll a[n+1];
	ll sum[n+1];
	sum[0]=0;
	map < ll,vector < pair <ll,ll> > > m;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	for (ll j=1;j<=n;j++)
	{
		for (ll i=1;i<=j;i++)
		{
			ll temp=sum[j]-sum[i-1];
			//cout<<temp<<endl;
			if (m.find(temp)==m.end())
			{
				m[temp].push_back(make_pair(i,j));
			}
			else
			{
				vector < pair <ll,ll> > v;
				v=m[temp];
					v.push_back(make_pair(i,j));
					m[temp]=v;
			}
		}
	}
	map < ll,vector < pair <ll,ll> > >::iterator it;
	ll ma=INT_MIN;
	ll ma_ind;
	for (it=m.begin();it!=m.end();it++)
	{
		vector < pair <ll,ll> > v;
		vector < pair <ll,ll> > v1;
		v=it->second;
		// cout<<"sum "<<it->first<<" "<<endl;
		// for (ll i=0;i<v.size();i++)
		// 	cout<<v[i].first<<" "<<v[i].second<<endl;
		ll c=1;
		ll r=v[0].second;
		v1.push_back(make_pair(v[0].first,v[0].second));
		for (ll i=1;i<v.size();i++)
		{
			if (v[i].first>r)
			{
				c++;
				v1.push_back(make_pair(v[i].first,v[i].second));
				r=v[i].second;
			}
		}
		m[it->first]=v1;
		//cout<<v1.size()<<endl;
		ll temp=v1.size();
		if (temp>ma)
		{
			ma=v1.size();
			ma_ind=it->first;
		}
		// ll temp=v.size();
		// //cout<<temp<<endl;
		// if (ma<temp)
		// {
		// 	ma=temp;
		// 	ma_ind=it->first;
		// }

	}
	vector <pair <ll,ll> > v;
	v=m[ma_ind];
	cout<<v.size()<<endl;
	for (ll i=0;i<v.size();i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		} 
}