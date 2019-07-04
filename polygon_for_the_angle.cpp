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
		ll ans;
		ll f=0;
		for (ll i=3;i<=360;i++)
		{
			if ((n*i)%180==0&&(n*i)/180<=i-2)
			{
				f=1;
				ans=i;
				break;
			}
		}
		if (f==1)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}	
}