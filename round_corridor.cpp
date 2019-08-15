#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m,q;
	cin>>n>>m>>q;
	ll g=__gcd(n,m);
	ll in=n/g;
	ll out=m/g;
	while (q--)
		{
			ll sx,sy,ex,ey;
			cin>>sx>>sy>>ex>>ey;
			if (sx==1&&ex==1)
			{
				ll f1;
				ll f2;
				if (sy%in==0)
					f1=sy/in-1;
				else
					f1=sy/in;
				if (ey%in==0)
					f2=ey/in-1;
				else
					f2=ey/in;
				if (f1==f2)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
			else if (sx==2&&ex==2)
			{
				ll f1;
				ll f2;
				if (sy%out==0)
					f1=sy/out-1;
				else
					f1=sy/out;
				if (ey%out==0)
					f2=ey/out-1;
				else
					f2=ey/out;
				if (f1==f2)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
			else if (sx==2&&ex==1)
			{
				ll f1;
				ll f2;
				if (sy%out==0)
					f1=sy/out-1;
				else
					f1=sy/out;
				if (ey%in==0)
					f2=ey/in-1;
				else
					f2=ey/in;
				if (f1==f2)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			} 
			else if (sx==1&&ex==2)
			{
				ll f1;
				ll f2;
				if (sy%in==0)
					f1=sy/in-1;
				else
					f1=sy/in;
				if (ey%out==0)
					f2=ey/out-1;
				else
					f2=ey/out;
				if (f1==f2)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
		}
}