#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll d;
	int n;
	cin>>d>>n;
	ll a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	ll count=0;
	for (int i=0;i<n-1;i++)
		count+=(d-a[i]);
	cout<<count;
}