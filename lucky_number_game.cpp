#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		ll p[n];
		for (ll i=0;i<n;i++)
			cin>>p[i];
		ll alice=0;
		ll bob=0;
		ll both=0;
		for (ll i=0;i<n;i++)
		{
			if ((p[i]%a==0)&&(p[i]%b!=0))
				bob++;
			else if ((p[i]%a!=0)&&(p[i]%b==0))
				alice++;
			else if ((p[i]%a==0)&&(p[i]%b==0))
				both++;
		}
		if (both==0&&alice==bob)
			cout<<"ALICE"<<endl;
		else if (both!=0&&alice==bob)
			cout<<"BOB"<<endl;
		else if (alice>bob)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
	}
}