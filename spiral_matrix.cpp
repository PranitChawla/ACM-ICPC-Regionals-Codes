#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n][m];
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<m;j++)
			cin>>a[i][j];
	}
	ll x=0;
	ll y=0;
	while ((n-1-x)>0&&(m-1-y)>0)
	{
		for (ll i=y;i<=m-1-y;i++)
			cout<<a[x][i]<<" ";
		for (ll i=x+1;i<=n-1-x;i++)
			cout<<a[i][m-1-y]<<" ";
		for (ll i=m-2-y;i>=y;i--)
			cout<<a[n-1-x][i]<<" ";
		for (ll i=n-2-x;i>=x+1;i--)
			cout<<a[i][y]<<" ";
		x++;
		y++;
	}
}