#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll total=0;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]==0)
			a[i]=1;
		else
		{
			a[i]=-1;
			total++;
		}
	}
	ll sum=0;
	ll ma=INT_MIN;
	ll left=1;
	ll left_=1;
	ll right=1;
	for (ll i=1;i<=n;i++)
	{
		sum+=a[i];
		if (sum<0)
		{
			sum=0;
			left_=i+1;
		}
		else if (sum>ma)
		{
			ma=sum;
			right=i;
			left=left_;
		}
	}
	ll c=0;
	for (ll i=left;i<=right;i++)
	{
		if (a[i]==-1)
			c++;
	}
	if (total==n)
		cout<<total-1;
	else
		cout<<max(total,total+ma);
}