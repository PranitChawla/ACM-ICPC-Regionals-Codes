#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	if (k<n)
		cout<<1;
	else
	{
		if (k%n!=0)
			cout<<(k/n)+1;
		else
			cout<<k/n;
	}
}