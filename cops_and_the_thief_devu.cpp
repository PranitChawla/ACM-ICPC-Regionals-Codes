#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll m,x,y;
		cin>>m>>x>>y;
		bool safe[101];
		memset(safe,0,sizeof(safe));
		ll a[m];
		for (ll i=0;i<m;i++)
		{
			cin>>a[i];
			ll left,right;
			left=a[i]-x*y;
			right=a[i]+x*y;
			ll a=1;
			ll b=100;
			left=max(a,left);
			right=min(b,right);
			for (ll j=left;j<=right;j++)
				safe[j]=1;
		}
		ll c=0;
		for (ll i=1;i<=100;i++)
		{
			if (safe[i]==0)
				c++;
		}
		cout<<c<<endl;
	}
}