#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
double angle (ll i,ll j, ll a[], ll vis[],ll p, ll q)
{
	ll x1=a[i];
	ll x2=a[j];
	double x=(double)x2-x1;
	double y=sqrt((double)(p-x1)*(p-x1)+q*q);
	double z=sqrt((double)(p-x2)*(p-x2)+q*q);
	double an=((double)y*y+(double)z*z-(double)x*x)/((double)2*y*z);
	an=acos(an);
	return an;
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		ll p,q;
		cin>>p>>q;
		ll vis[n];
		memset(vis,0,sizeof(vis));
		double sum=0;
		double max_angle;
		for (ll i=0;i<n;i++)
		{
			if (vis[i]==0)
			{
			max_angle=INT_MIN;
			ll j_max=0;
			for (ll j=i+1;j<n;j++)
			{
				if (vis[j]==0)
				{
				double an=angle(i,j,a,vis,p,q);
				// cout<<an<<endl;
				if (an>max_angle)
				{
					max_angle=an;
					j_max=j;
				}
				}
			}
			// cout<<max_angle<<endl;
			sum+=max_angle;
			vis[i]=1;
			vis[j_max]=1;

		}
	}

	//cout<<sum<<endl;
	printf("%0.10lf",sum);
	cout<<endl;

}
}