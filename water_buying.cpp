#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll q;
	cin>>q;
	while (q--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		if ((double)b/2<=a)
			cout<<(n/2)*b+(n%2)*a<<endl;
		else
			cout<<n*a<<endl;
	}
}