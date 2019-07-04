#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,s,t;
	cin>>n>>s>>t;
	ll a[n+1];
	for (int i=1;i<=n;i++)
		cin>>a[i];
	if (s==t)
		cout<<0<<endl;
	else
	{
		int flag=0;
		ll count=0;
		ll vis[n+1];
		for (ll i=1;i<=n;i++)
			vis[i]=0;
		ll s_orig=s;
		while (s!=t)
		{
			if (a[s]==s_orig)
			{
				flag=1;
				break;
			}
			s=a[s];
			count++;
			// if (count<100)
			// cout<<s<<" "<<a[s]<<endl;
		}
		if (flag==1)
			cout<<-1;
		else
		cout<<count;
	}
}