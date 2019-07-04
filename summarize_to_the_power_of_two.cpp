#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool is_power (ll x)
{
	return x && (!(x&(x-1)));
}
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	bool b[n];
	memset(b,0,sizeof(b));
	vector <int> list[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<n;j++)
		{
			if (i!=j)
			{
					if (is_power(a[i]+a[j]))
					{
						// b[i]=1;
						// b[j]=1;
						// cout<<a[i]<<" "<<a[j]<<endl;
						list[i].push_back(j);

					}
			}
		}
	}
	for (ll i=0;i<n;i++)
	{
		if (list[i].size()==1)
		{
			b[i]=1;
			b[*(list[i].begin())]=1;
		}
	}
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j<n;j++)
		{
			if (i!=j)
			{
					if (b[i]==0&&b[j]==0)
					{
					if (is_power(a[i]+a[j]))
					{
						// b[i]=1;
						// b[j]=1;
						// cout<<a[i]<<" "<<a[j]<<endl;
						b[i]=1;
						b[j]=1;

					}
					}
			}
		}
	}
	ll count=0;
	for (ll i=0;i<n;i++)
	{
		if (b[i]==0)
			count++;
	}
	cout<<count;
	 // int a=is_power(2);
	 // cout<<a;

}