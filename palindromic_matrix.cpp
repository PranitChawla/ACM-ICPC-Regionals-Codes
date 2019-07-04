#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (pair <ll,ll> a,pair <ll,ll> b)
{
	return (a.first>b.first);
}
int main()
{
	ll n;
	cin>>n;
	ll f[1003];
	memset(f,0,sizeof(f));
	for (ll i=0;i<n*n;i++)
		{
			ll a;
			cin>>a;
			f[a]++;
		}
	ll a[n+1][n+1];
	vector < pair <ll,ll> > ans;
	ll fo=0;
	ll t=0;
	ll o=0;
	for (ll i=1;i<=1000;i++)
	{
		if (f[i])
			ans.push_back(make_pair(f[i],i));
		if (f[i]>=4)
			fo++;
		else if (f[i]>=2)
			t++;
		else if (f[i]>=1)
			o++;
	}
	sort(ans.begin(),ans.end(),compare);
	if (n%2==0)
	{
		if (ans.size()>n)
			cout<<"NO";
		else
		{
			ll k=0;
			for (ll i=1;i<=n/2;i++)
			{
				for (ll j=1;j<=n/2;j++)
					{
			if (ans[k].first>=4)
			{
				a[i][j]=
			}
		}
	}
			
		}
	}
}