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
	{
		cin>>a[i];
	}
	for (int i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);

		//if (a[0]<0&&a[1]<0&&b[0]<0)
	ll max1=max(max(a[1]*b[0],a[n-1]*b[m-1]),max(a[1]*b[m-1],a[n-1]*b[0]));
	ll max2=max(max(a[0]*b[0],a[n-2]*b[m-1]),max(a[0]*b[m-1],a[n-2]*b[0]));
	cout<<min(max1,max2);
	//cout<<a[n-2]*b[m-1];
}