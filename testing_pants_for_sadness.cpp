#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	ll a[n];
	ll sum=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i]*(i+1);
	}
	cout<<sum-(n)*(n-1)/2;
}