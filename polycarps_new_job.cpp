#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	ll mi=INT_MIN;
	ll ma=INT_MIN;
	while (t--)
	{
		char a;
		ll x,y;
		cin>>a>>x>>y;
		if (a=='+')
		{
			ll mini=min(x,y);
			ll maxi=max(x,y);
			ma=max(maxi,ma);
			mi=max(mi,mini);
		}
		else
		{
			ll m1=min(x,y);
			ll m2=max(x,y);
			if (mi<=m1&&ma<=m2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}