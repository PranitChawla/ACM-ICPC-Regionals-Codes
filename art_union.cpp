#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll m,n;
	cin>>m>>n;
	ll a[m][n];
	int j;
	for (ll i=0;i<m;i++)
		for (j=0;j<n;j++)
			cin>>a[i][j];
	vector <ll> finish(m);
	for (int i=0;i<n;i++)
	{
		ll free=0;
		for (ll j=0;j<m;j++)
		{
			ll start=max(free,finish[j]);
				finish[j]=start+a[j][i];
				free=finish[j];
		}
	}
	for (ll i=0;i<m;i++)
		cout<<finish[i]<<" ";
}