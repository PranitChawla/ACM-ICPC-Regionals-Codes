#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000000;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll xl=-1;
		ll xu=-1;
		ll yu=-1;
		ll yl=-1;
		cout<<"Q "<<0<<" "<<0<<endl;
		fflush(stdout); 
		ll a;
		cin>>a;
		fflush(stdin);
		if (a==0)
		{
			xl=0;
			yl=0;
		}
		cout<<"Q "<<0<<" "<<m<<endl;
		fflush(stdout); 
		ll b;
		cin>>b;
		if (b==0)
		{
			xl=0;
			yu=m;
		}
		fflush(stdin);
		cout<<"Q "<<m<<" "<<0<<endl;
		fflush(stdout); 
		ll c;
		cin>>c;
		if (c==0)
		{
			xu=m;
			yl=0;
		}
		fflush(stdin);
		ll y_mid=(a-b+m)/2;
		ll x_mid=(m-a-c)/2;
		cout<<"Q "<<0<<" "<<y_mid<<endl;
		fflush(stdout); 
		ll d;
		cin>>d;
		fflush(stdin);
		xl=d;
		yl=a-xl;
		yu=xl+m-b;
		xu=m+yl-c;
		cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<endl;
		fflush(stdout); 
		ll q;
		cin>>q;
		fflush(stdin); 
	}
}