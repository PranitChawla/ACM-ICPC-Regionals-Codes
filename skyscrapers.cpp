#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
	cin>>n>>m;
	ll a[n+1][m+1];
	set <ll> rows[n+1];
	set <ll> cols[m+1];
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=m;j++)
		{
			cin>>a[i][j];
			rows[i].insert(a[i][j]);
		}
	}
	for (ll j=1;j<=m;j++)
	{
		for (ll i=1;i<=n;i++)
		{
			cols[j].insert(a[i][j]);
		}
	}
	set <ll>::iterator it;
	vector <ll> row[n+1];
	vector <ll> col[m+1];
	for (ll i=1;i<=n;i++)
	{	
	for (it=rows[i].begin();it!=rows[i].end();it++)
	{
		row[i].push_back(*it);
	}
	}
	for (ll i=1;i<=m;i++)
	{	
	for (it=cols[i].begin();it!=cols[i].end();it++)
	{
		col[i].push_back(*it);
	}
	}
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=m;j++)
		{
			ll c=lower_bound(row[i].begin(),row[i].end(),a[i][j])-row[i].begin();
			c++;
			ll d=lower_bound(col[j].begin(),col[j].end(),a[i][j])-col[j].begin();
			d++;
			ll index=max(c,d);
			ll t1=row[i][rows[i].size()-1];
			ll t2=col[j][cols[j].size()-1];
			ll t3=row[i].size();
			ll t4=col[j].size();
			ll ra=min(t1,t3);
			ll ca=min(t2,t4);
			ll ans=max(ra+index-c,ca+index-d);
			a[i][j]=ans;
		}
	}
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}