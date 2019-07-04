#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,m;
	cin>>n>>m;
	ll seq[m+1];
	if (m%2==1)
	{
	ll left=(m+1)/2-1;
	ll right=(m+1)/2+1;
		seq[1]=(m+1)/2;
	ll count=0;
	for (ll i=2;i<=m;i++)
	{
		if (i%2==0)
		{
			seq[i]=left;
			left--;
		}
		else
		{
			seq[i]=right;
			right++;
		}
	}
	}
	else
	{
		ll left=(m+1)/2;
		ll right=(m+1)/2+1;
		ll count=0;
		for (ll i=1;i<=m;i++)
		{
			if (i%2==1)
		{
			seq[i]=left;
			left--;
		}
		else
		{
			seq[i]=right;
			right++;
		}	
		}
	}
	for (ll i=0;i<n/m;i++)
	{
		for (ll j=1;j<=m;j++)
			cout<<seq[j]<<endl;
	}
	for (ll i=1;i<=n%m;i++)
		cout<<seq[i]<<endl;
}