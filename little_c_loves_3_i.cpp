#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	if (n%3==0)
	{
		cout<<1<<" "<<1<<" "<<n-2;
	}
	else if (n%3==1)
	{
		cout<<1<<" "<<1<<" "<<n-2;
	}
	else
	{
		cout<<1<<" "<<2<<" "<<n-3;
	}
}