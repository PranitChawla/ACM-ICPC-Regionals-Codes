#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;
ll ncr [1002][1002];
int main()
{
ll i,j;
for (i=0; i<=1001; i++) ncr[i][0] = 1;
for (j=0; j<=1001; j++) ncr[j][j] = 1;
for (i=1; i<=1001; i++)
for (j=1; j<i; j++)
ncr[i][j] = (ncr[i-1][j-1]%m + ncr[i-1][j]%m)%m;
ll k;
cin>>k;
// ll a[k+1];
// for (i=1;i<=k;i++)
// 	cin>>a[i];
// ll gap=a[1]+1;
// ll ans=1;
// for (i=2;i<=k;i++)
// {
// 	ll sum=0;
// 	for (j=1;j<=a[i]-1;j++)
// 	{
// 			sum=(sum%m+ncr[gap][j]%m*ncr[a[i]-2][j-1]%m)%m;
// 			// cout<<a[i]-1<<" "<<j-1<<" "<<ncr[a[i]-2][j-1]<<endl;
// 	}
// 	// cout<<sum<<" "<<gap<<" "<<endl;
// 	gap=(gap%m+a[i]%m)%m;
// 	if (sum!=0)
// 		ans=(ans%m*sum%m)%m;
// }
// cout<<ans;	
for (ll i=0;i<=k;i++)
	cout<<ncr[k][i]<<" ";
cout<<endl;
}