#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,m;
		cin>>n>>m;
		if (n%2==1&&m%2==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}