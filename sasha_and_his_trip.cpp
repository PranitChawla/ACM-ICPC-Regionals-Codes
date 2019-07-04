#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,v;
	cin>>n>>v;
	ll t=0;
	ll ans=0;
	for (ll i=1;i<=n;i++)
	{
		if (t>=n-i)
		{

		}
		else
		{
			ans=ans+min(v-t,n-i)*i;
			t+=min(v-t,n-i);
		}
		t--;
	}
	cout<<ans;
}