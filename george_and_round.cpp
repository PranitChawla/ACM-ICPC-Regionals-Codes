#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,m;
	cin>>n>>m;
	ll a[n];
	ll b[m];
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<m;i++)
		cin>>b[i];
	int first=0;
	int second=0;
	while (first<n&&second<m)
	{
		if (a[first]<=b[second])
		{
			first++;
			second++;
		}
		else
			second++;
	}
	cout<<n-first;
}