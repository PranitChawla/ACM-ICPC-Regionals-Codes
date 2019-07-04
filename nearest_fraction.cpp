#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll x,y,n;
	double diff1,diff2;
	cin>>x>>y>>n;
	if (n>=y)
	{
		ll g=__gcd(x,y);
		x/=g;
		y/=g;
		cout<<x<<"/"<<y;
	}
	else
	{
		double min1;
		ll a_m;
		ll b_m;
		for (ll i=1;i<=n;i++)
		{
			ll a1,a2;
			ll a_min;
			a1=floor((double)x*i/y);
			a2=ceil((double)x*i/y);
			// if (i==49351)
				//cout<<a1<<" "<<a2<<endl;
			// if (i==49351)
			//cout<<a1<" "<<a2<<endl;
			//cout<<a1<<" "<<a2<<endl;;
			// double diff1=(double)abs(x*i-y*a1)/(double)(i*y);
			// double diff2=(double)abs(x*i-y*a2)/(double)(i*y);
			diff1=abs((double)x/y-(double)a1/i);
			diff2=abs((double)x/y-(double)a2/i);
			// if (i==49351)
			 //cout<<diff1<<" "<<diff2<<endl;
			if (diff1<=diff2)
				a_min=a1;
			else if (diff1>diff2)
				a_min=a2;
			if (i==1)
			{
				min1=min(diff1,diff2);
				a_m=a_min;
				b_m=i;
			}
			else
			{
				//cout<<(min(diff1,diff2)<min1)<<endl;
				//abs(min(diff1,diff2)-min1)>pow(10,-5)
				if (min(diff1,diff2)<min1&&abs(min(diff1,diff2)-min1)>pow(10,-15))
				{
					min1=min(diff1,diff2);
					a_m=a_min;
					b_m=i;
				}
			}
			//
			//cout<<a_m<<" "<<b_m<<endl;
		}
		ll g=__gcd(a_m,b_m);
		cout<<a_m/g<<"/"<<b_m/g;
	}
}