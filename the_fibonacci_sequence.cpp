#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	ll first=0;
	ll second=1;
	ll third=2;
	ll count_so_far=2;
	ll max_count=2;
	while (third<n)
	{
		if (a[first]+a[second]==a[third])
		{
			count_so_far++;
		}
		else
			count_so_far=2;
		if (count_so_far>max_count)
			max_count=count_so_far;
		first=second;
		second=third;
		third++;
	}
	if (n==1)
		cout<<1;
	else
		cout<<max_count;
}
