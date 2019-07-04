#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll min;
	ll min_pos;
	for (ll i=1;i<=k;i++)
	{
		ll sum=a[i];
		ll t=i;
		for (ll j=1;j<=(n/k)-1;j++)
		{
			if (t+k>n)
				t=(t+k)%n;
			else
				t+=k;
			sum+=a[t];
		}
		if (i==1)
		{
			min=sum;
			min_pos=i;
		}
		else 
		{
			if (sum<min)
			{
				min=sum;
				min_pos=i;
			}
			else if (sum==min)
			{
				if (i<min_pos)
				{
					min_pos=i;
				}
			}
		}
		//cout<<min_pos<<endl;
	}
	cout<<min_pos;
}