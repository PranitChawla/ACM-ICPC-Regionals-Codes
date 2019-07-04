#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll x=n%10;
	n/=10;
	n=n*10;
	if (x>=5)
		n=n+10;
	cout<<n<<endl;
}