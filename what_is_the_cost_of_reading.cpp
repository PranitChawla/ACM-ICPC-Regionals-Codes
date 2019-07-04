#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll find_t (ll beg, ll end, ll x, ll m, ll n, ll i)
{
	ll mid=(beg+end)/2;
	ll val=(x+(mid-1)*n)/m;
	ll val2=(x+(mid-2)*n)/m;
	ll val3=(x+(mid)*n)/m;
	// cout<<val<<" "<<mid<<" "<<i<<endl;
	//if (mid<=1)
	//	return mid;
	if (beg>=end&&val!=i)
		return 0;
	else if (val==i)
	{
		if (val3!=val2)
			return (mid);
		else
			return find_t(beg,mid-1,x,m,n,i); 
	}
	else if (val>i)
		return find_t(beg,mid-1,x,m,n,i);
	else
		return find_t(mid+1,end,x,m,n,i);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	while (1)
	{
		ll n,m,x;
		cin>>n>>m>>x;
		if (n==0&&m==0&&x==0)
			break;
		else
		{
			ll lambamax=(x+(m-1)*n)/m;
			map <ll,ll> m1;
			ll temp=x/m;
			vector < pair <ll,ll> > v; 
			m1.insert(make_pair(1,temp));
			v.push_back(make_pair(1,temp));
			for (ll i=1;i<=lambamax;i++)
			{
				ll t;
				t=find_t(1,m,x,m,n,i);
				// t=floor((double)(m*i-x)/n)+1;
				// cout<<t<<endl;
				if (t>=1)
				{
					if (m1.find(t)==m1.end())
					{
						m1.insert(make_pair(t,i));
						v.push_back(make_pair(t,i));
					}
				}
			}
			ll ans=0;
			temp=(x+(m-1)*n)/m;
			if (m1.find(m)==m1.end())
			{
			m1.insert(make_pair(m,temp));
			v.push_back(make_pair(m,temp));
			}
			// for (ll i=0;i<v.size();i++)
			// 	cout<<v[i].first<<" "<<v[i].second<<endl;
			for (ll i=0;i<v.size()-1;i++)
				{
					ans=ans+(v[i+1].first-v[i].first)*v[i].second;
					//cout<<ans<<endl;
				}
					ans=ans+v[v.size()-1].second;
				 cout<<ans<<endl;
			 }
	}
}