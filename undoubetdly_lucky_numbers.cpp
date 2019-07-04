#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll x,ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}
int main ()
{
	ll n;
	cin>>n;
	int size=10;
	ll power_set=power(2,size);
	set <ll> list;
	ll num;
	int a;
	for (int t=0;t<=9;t++)
	{
		for (int y=t+1;y<=9;y++)
		{
	for (int i=0;i<=power_set;i++)
	{
		num=0;
		if (i!=0)
		a=(int)log2(i);
		else
		a=0;
		int bits=a+1;
		for (int j=0;j<bits;j++)
		{
			if (i&(1<<j))
				num+=t*power(10,j);
			else
				num+=y*power(10,j);
		}
		//cout<<bits<<endl;

		// if (list.find(num)==list.end())
		// {
		// cout<<"yes"<<endl;
		// //list.insert(num);
		// }
			if (num!=0)
			list.insert(num);
		//bits++;
		while (bits<=size)
		{
			num+=y*power(10,bits);
			if (num!=0)
			list.insert(num);
			bits++;
		}
	}
	}
}
	set <ll>::iterator it;
	// cout<<list.size()<<endl;
	ll count=0;
	for (it=list.begin();it!=list.end();it++)
	{
		if (*it<=n)
			count++;
	}
	cout<<count;
}
