#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector < pair <ll,ll> > v;
	for (ll i=0;i<m;i++)
	{
		ll l,r;
		cin>>l>>r;
		v.push_back(make_pair(l,r));
	}
	ll b[n+1];
	ll ans=INT_MIN;
	ll vis[n+1][m+1];
	ll max_i;
	memset(vis,0,sizeof(vis));
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=n;j++)
			b[j]=a[j];
		for (ll j=0;j<m;j++)
		{
			
			if ((i>=1&&(i<=v[j].first-1))||((i>=v[j].second+1)&&i<=n))
			{
				for (ll k=v[j].first;k<=v[j].second;k++)
					{
						b[k]--;
					}
					vis[i][j+1]=1;
			}
		}
		ll ma=INT_MIN;
		ll mi=INT_MAX;
		for (ll j=1;j<=n;j++)
		{
			ma=max(ma,b[j]);
			mi=min(mi,b[j]);
			//cout<<b[j]<<" ";
		}
		//cout<<ma<<" "<<mi<<endl;
		if ((ma-mi)>ans)
		{
		ans=ma-mi;
		max_i=i;
		}
		//cout<<ans<<" "<<s.size()<<endl;
	}
	cout<<ans<<endl;
	ll c=0;
	for (ll j=1;j<=m;j++)
		{
			if (vis[max_i][j])
				c++;
		}
	cout<<c<<endl;
	for (ll j=1;j<=m;j++)
		{
			if (vis[max_i][j])
				cout<<j<<" ";
		}
}