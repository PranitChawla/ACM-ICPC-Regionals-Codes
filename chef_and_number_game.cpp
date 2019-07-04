#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll p=0;
		ll ne=0;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			if (a[i]>0)
				p++;
			else if (a[i]<0)
				ne++;
		}
		if (p!=0&&ne==0)
			cout<<p<<" "<<p<<endl;
		else if (ne!=0&&p==0)
			cout<<ne<<" "<<ne<<endl;
		else
			cout<<max(p,ne)<<" "<<min(p,ne)<<endl;
	}
}