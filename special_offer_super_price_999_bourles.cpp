#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll x, ll y)
{
    ll temp=1;
    for (int i=1;i<=y;i++)
    	temp=temp*x;
    return temp;
}
int no_of_digs (ll a)
{
	int count=0;
	while (a>0)
	{
		a/=10;
		count++;
	}
	return count;
}
int main()
{
	ll n,d;
	cin>>n>>d;
	// if (no_of_digs(n)>no_of_digs(n-d))
	// {
	// 	//cout<<"test";
	// 	for (int i=0;i<no_of_digs(n)-1;i++)
	// 		cout<<"9";
	// }
		int num=no_of_digs(d);
		int flag=0;
		int i;
		for (i=num;i>=1;i--)
		{
			ll a;
			ll p=power(10,i);
			a=n%p;
			if (d>a)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			ll temp;
			ll p=power(10,i);
			//cout<<p<<endl;
			ll t=0;
			for (int j=0;j<i;j++)
				t+=9*power(10,j);
			//cout<<t;
			if (n%p==t)
				cout<<n;
			else
			{
			temp=n-n%p-1;
			cout<<temp;
			}
		}
		else
		{
			cout<<n;
		}
}