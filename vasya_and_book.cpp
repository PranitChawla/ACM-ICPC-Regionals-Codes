#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,x,y,d;
		cin>>n>>x>>y>>d;
		if (abs(x-y)%d==0)
			cout<<abs(x-y)/d<<endl;
		else
		{
			int f1=(y-1)%d;
			int f2=(n-y)%d;
			ll c1,c2;
			if (f1==0&&f2==0)
				{	
					c1=ceil((double)(x-1)/d);
					c1=c1+(y-1)/d;
					c2=ceil((double)(n-x)/d);
					c2=c2+(n-y)/d;
					cout<<min(c1,c2)<<endl;
				}
			else if (f1==0&&f2!=0)
			{
				c1=ceil((double)(x-1)/d);
				c1=c1+(y-1)/d;
				cout<<c1<<endl;
			}
			else if (f1!=0&&f2==0)
			{
				c2=ceil((double)(n-x)/d);
				c2=c2+(n-y)/d;
				cout<<c2<<endl;
			}
			else
				cout<<-1<<endl;
		}
	}
}