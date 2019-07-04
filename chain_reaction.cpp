#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	return a.first<b.first;
}
ll cnt[1000004];
ll dp[100004];
int main()
{
	ll n;
	cin>>n;
	vector < pair <ll,ll> > v;
	ll temp1[n+1];
	ll temp2[n+1];
	for (ll i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),compare);
	ll t=1;
	for (ll i=0;i<v.size();i++)
	{
		temp1[t]=v[i].first;
		temp2[t]=v[i].second;
		t++;
	}
	ll k=0;
	memset(cnt,0,sizeof(cnt));
	for (ll i=1;i<=1000000;i++)
	{
		if (v[k].first==i)
		{
			cnt[i]=cnt[i-1]+1;
			k++;
		}
		else
		{
			cnt[i]=cnt[i-1];
		}
	}
	memset(dp,0,sizeof(dp));
	for (ll i=1;i<=temp[1];i++)
		dp[i]=0;
	for (ll i=2;i<=n;i++)
	{
		ll num;
		if (temp[i]>=b[i])
		{
			num=cnt[temp[i]]-cnt[temp[i]-]
		}
	}


}