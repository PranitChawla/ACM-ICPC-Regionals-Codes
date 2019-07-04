#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		bool fl[n];
		memset(fl,0,sizeof(n));
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for (ll i=0;i<n;i++)
		{
			if (k>=a[i])
			{
				k=k-a[i];
				fl[i]=1;
			}
			else
				fl[i]=0;
		}
		for (ll i=0;i<n;i++)
			cout<<fl[i];
		cout<<endl;
	}
}