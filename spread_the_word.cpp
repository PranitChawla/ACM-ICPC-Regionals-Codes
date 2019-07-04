#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		ll sum[n+1];
		memset(sum,0,sizeof(sum));
		for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
			if (i==1)
				sum[i]=a[i];
			else
				sum[i]=a[i]+sum[i-1];
		}
		// for (ll i=1;i<=n;i++)
		// 	cout<<sum[i]<<" ";
		ll tot=a[1]+1;
		ll left=n-tot;
		ll days=1;
		while (left>0)
		{
			left=left-sum[tot];
			tot=tot+sum[tot];
			days++;
		}
		cout<<days<<endl;
	}
}