#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		cin>>n>>k;
		ll vr[n+1];
		ll vc[n+1];
		memset(vr,0,sizeof(vr));
		memset(vc,0,sizeof(vc));
		for (ll i=0;i<k;i++)
		{
			ll a,b;
			cin>>a>>b;
			vr[a]=1;
			vc[b]=1;
		}
		vector <ll> ar,ac;
		for (ll i=1;i<=n;i++)
		{
			if (!vr[i])
				ar.push_back(i);
			if (!vc[i])
				ac.push_back(i);
		}
		cout<<ac.size()<<" ";
		for (ll i=0;i<ar.size();i++)
			cout<<ar[i]<<" "<<ac[i]<<" ";
		cout<<endl;
	}
}