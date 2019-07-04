#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n+1][n+1];
		ll count=1;
		memset(a,0,sizeof(a));
		for (ll i=1;i<=n;i++)
		{
			ll k=i;
			for (ll j=1;j<=i;j++)
			{
				a[j][k]=count;
				count++;
				k--;
			}
		}
		for (ll i=2;i<=n;i++)
		{
			ll k=i;
			for (ll j=n;j>=i;j--)
			{
				a[k][j]=count;
				count++;
				k++;
			}

		}
		for (ll i=1;i<=n;i++)
		{
			for (ll j=1;j<=n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}