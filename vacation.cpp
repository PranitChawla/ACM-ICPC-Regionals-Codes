#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1],b[n+1],c[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i]>>b[i]>>c[i];
	ll dp1[n+1];
	ll dp2[n+1];
	ll dp3[n+1];
	dp1[0]=0;
	dp2[0]=0;
	dp3[0]=0;
	dp1[1]=a[1];
	dp2[1]=b[1];
	dp3[1]=c[1];
	//cout<<max(dp1[1],max(dp2[1],dp3[1]))<<endl;
	for (ll i=2;i<=n;i++)
	{
		dp1[i]=max(dp2[i-1]+a[i],dp3[i-1]+a[i]);
		dp2[i]=max(dp1[i-1]+b[i],dp3[i-1]+b[i]);
		dp3[i]=max(dp2[i-1]+c[i],dp1[i-1]+c[i]);
		//cout<<max(dp1[i],max(dp2[i],dp3[i]))<<endl;
	}
	cout<<max(dp1[n],max(dp2[n],dp3[n]));
}