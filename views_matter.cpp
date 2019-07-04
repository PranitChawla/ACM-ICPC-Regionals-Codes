#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll layer=a[n-1]+1;
	ll count=0;
	int f=0;
	ll index;
	for (ll i=n-1;i>=1;i--)
	{
		if (layer==1)
			{
				f=1;
				index=i;
				break;
			}
		if (a[i-1]<a[i])
		{
			if (layer-1<a[i-1]+1)
			{
				if(a[i]>=layer)
					count+=(a[i]-layer+1);
				layer--;
				count+=(layer-1);
			}
			else
			{
				if(a[i]>=layer)
					count+=(a[i]-layer+1);
				layer=(a[i-1]+1);
				count+=a[i-1];
			}
		}
		else if (a[i-1]==a[i])
		{
			count+=(a[i]-1);
			layer--;
		}
	}
	if (f)
	{
		for (ll i=index;i>=0;i--)
			count+=(a[i]-1);
	}
	else
	{
		// cout<<layer<<endl;
		if(a[0]!=1)
		count+=(a[0]-(layer-1));
	}
	cout<<count;
}