#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	if (n<=2)
		cout<<1;
	else if (n%2==0)
	{
		if ((n/2)%2==0)
		{
			cout<<0;
		}
		else
			cout<<1;
	}
	else if (n%2==1)
	{
		if (((n-1)/2)%2==0)
		{
			cout<<1;
		}
		else 
			cout<<0;
	}
}