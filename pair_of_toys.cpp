#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	if (n>=k)
	{
		if ((k-1)%2==0)
			cout<<(k-1)/2;
		else
			cout<<(k-2)/2;
	}
	else
	{
		ll sum_min=3;
		ll sum_max=2*n-1;
		if (k<sum_min||k>sum_max)
			cout<<0;
		else if ((k-1)%2==0)
		{
			cout<<(k-1)/2-(k-n-1);
		}
		else
		{
			cout<<(k-2)/2-(k-n-1);
		}
	}
}