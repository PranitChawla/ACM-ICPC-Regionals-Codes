#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	if (n<=2)
		cout<<"No";
	else if (n%2==0)
	{
		cout<<"Yes"<<endl;
		cout<<n/2<<" ";
		for (ll i=2;i<=n;i+=2)
			cout<<i<<" ";
		cout<<endl;
		cout<<n/2<<" ";
		for (ll i=1;i<=n;i+=2)
			cout<<i<<" ";
	}
	else
	{
		cout<<"Yes"<<endl;
		cout<<n/2<<" ";
		for (ll i=2;i<=n;i+=2)
			cout<<i<<" ";
		cout<<endl;
		cout<<(n+1)/2<<" ";
		for (ll i=1;i<=n;i+=2)
			cout<<i<<" ";
	}
}