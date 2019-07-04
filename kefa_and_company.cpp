#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	return (a.first<b.first);
}
int main()
{
	ll n,d;
	cin>>n>>d;
	vector < pair <ll,ll> > v;
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),compare);
	ll sum[n+1];
	memset(sum,0,sizeof(sum));
	sum[0]=v[0].second;
	for (ll i=1;i<n;i++)
		sum[i]=sum[i-1]+v[i].second;
	ll ma=INT_MIN;
	for (ll i=0;i<n;i++)
	{
		ll ind=i;
		ll l1=0;
		ll r1=ind-1;
		ll l2=ind+1;
		ll r2=n-1;
		// if (r1>=0)
		// {
		// while (l1<=r1)
		// {
		// 	ll mid=(l1+r1)/2;
		// 	if (abs(v[mid].first-v[ind].first)>=d)
		// 		l1=mid+1;
		// 	else
		// 		r1=mid-1;
		// }
		// }
		if (l2<=n-1)
		{
		while (l2<=r2)
		{
			ll mid=(l2+r2)/2;
			if (abs(v[mid].first-v[ind].first)>=d)
				r2=mid-1;
			else
				l2=mid+1;
		}
		}
		// cout<<l1<<" "<<r2<<endl;
		if (i==0)
			ma=max(ma,sum[r2]);
		else
		{
			ma=max(ma,sum[r2]-sum[i-1]);
		}
	}
	cout<<ma;
}