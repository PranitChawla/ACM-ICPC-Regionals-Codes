#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll q;
	cin>>q;
	while (q--)
	{
		ll a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cout<<a[1]+(a[0]+a[2]-a[1])/2<<endl;
	}
}
