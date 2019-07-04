#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
int main()
{
	vector < pair <ll,ll> > v;
	vector <ll> v1[530];
	vector <ll> v2;
	vector <ll> v3;
 	for (ll i=1;i<=32;i++)
	{
		for (ll j=1;j<=i;j++)
		{
			v.push_back(make_pair(j,i/j));
		}
	}
	ll k=0;
	for (ll i=0;i<v.size();i++)
	{
		ll num=v[i].first;
		ll times=v[i].second;
		for (ll j=0;j<times;j++)
		{
			if (j%2==0)
			{
				for (ll m=0;m<num;m++)
					v1[k].push_back(1);
			}
			else
			{
				for (ll m=0;m<num;m++)
					v1[k].push_back(0);
			}
		}
		k++;
	}
	for (ll i=0;i<k;i++)
	{
		ll num=0;
		for (ll j=v1[i].size()-1;j>=0;j--)
			{
				num+=v1[i][v1[i].size()-1-j]*power(2,j);
			}
			v2.push_back(num);
	}
	sort(v2.begin(),v2.end());
	for (ll i=0;i<v2.size();i++)
	{
		v3.push_back(v2[i]);
		while (v2[i]==v2[i+1]&&i<v2.size())
			i++;
	}
	// for (ll i=0;i<v3.size();i++)
	// 	cout<<v3[i]<<" ";
	ll t;
	cin>>t;
	while (t--)
	{
		ll l,r;
		cin>>l>>r;
		ll count=0;
		for (ll i=0;i<v3.size();i++)
		{
			if (v3[i]>=l&&v3[i]<=r)
				count++;
		}
		cout<<count<<endl;
	} 

}