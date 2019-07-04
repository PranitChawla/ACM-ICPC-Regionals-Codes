#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,vb,vs;
	cin>>n>>vb>>vs;
	ll a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	ll x,y;
	cin>>x>>y;
	double tmin=pow(10,9);
	double dmin=pow(10,9);
	ll imin;
	for (int i=1;i<n;i++)
	{
		double t1,t2;
		t1=(double)a[i]/(double)vb;
		double dis;
		dis=sqrt((x-a[i])*(x-a[i])+y*y);
		t2=(double)dis/(double)vs;
		//cout<<t1+t2<<endl;
		// if (dis<dmin)
		// 	dmin=dis;
		if (t1+t2<tmin)
		{
			imin=i;
			tmin=t1+t2;
			dmin=dis;
		}
		else if (t1+t2==tmin)
		{
			if (dis<dmin)
			{
				dmin=dis;
				imin=i;
			}
		}
		//cout<<tmin<<endl;
	}
	cout<<imin+1;
}