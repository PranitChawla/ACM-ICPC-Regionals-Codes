#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	vector <ll> v;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]==0)
			v.push_back(i);
	}
	if (v.size()<=k)
	{
		cout<<n<<endl;
		for (ll i=1;i<=n;i++)
			cout<<1<<" ";
	}
	else
	{
	if (k==0)
	{
		ll ma=0;
		ll i=1;
		while (i<=n)
		{
			if (a[i]==1)
			{
				i++;
				ll c=1;
				while (a[i]==1&&i<=n)
				{
					c++;
					i++;
				}
				ma=max(ma,c);
			}
			i++;	
		}
		cout<<ma<<endl;
		for (ll i=1;i<=n;i++)
			cout<<a[i]<<" ";
	}
	else
	{
		ll ma=INT_MIN;
	ll l,r;
	for (ll i=0;i<v.size();i++)
	{
		ll left=v[i];
		ll right;
		ll ans;
		if (i+k-1<v.size())
			right=v[i+k-1];
		else 
			right=v[v.size()-1];
		//cout<<left<<" "<<right<<" ";
		if (left==v[0])
		{
			if (right==v[v.size()-1])
				ans=right;
			else
				ans=(v[i+k]-1);
		}
		else if (right==v[v.size()-1])
		{
			if (left==v[0])
				ans=n;
			else
				ans=n-(v[i-1]+1)+1;
		}
		else
		{
			ans=(v[i+k]-1)-(v[i-1]+1)+1;
		}
		//cout<<ans<<endl;
		if (ans>ma)
		{
			ma=ans;
			l=left;
			r=right;
		}
		//ma=max(ans,ma);
	}
	cout<<ma<<endl;
	for (ll i=1;i<=n;i++)
	{
		if (i>=l&&i<=r)
			cout<<1<<" ";
		else
			cout<<a[i]<<" ";
	}
}
}
}