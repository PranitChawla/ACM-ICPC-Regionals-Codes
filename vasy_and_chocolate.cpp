#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll s,a,b,c;
		cin>>s>>a>>b>>c;
		ll n=s/c;
		ll n1=n/a;
		cout<<n+n1*b<<endl;
	}
}