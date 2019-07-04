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
bool equal (ll a)
{
	int f=0;
	int s=0;
	while (a>0)
	{
		if (a%10==4)
			f++;
		if (a%10==7)
			s++;
		a/=10;
	}
	if (s==f)
		return true;
	else 
		return false;
}
int main ()
{
	ll n;
	cin>>n;
	int size=10;
	ll power_set=power(2,size);
	vector <ll> list;
	ll num;
	int a;
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
				num+=7*power(10,j);
			else
				num+=4*power(10,j);
		}
		//cout<<bits<<endl;
		list.push_back(num);
		//bits++;
		while (bits<=size)
		{
			num+=4*power(10,bits);
			list.push_back(num);
			bits++;
		}
	}
	vector <ll>::iterator it,it2;
	vector <ll> final;
	//sort(list.begin(),list.end());
	for (it=list.begin();it!=list.end();it++)
		{
			if (equal(*it))
				final.push_back(*it);
		}
	sort(final.begin(),final.end());
	// for (it=final.begin();it!=final.end();it++)
	// 	cout<<*it<<endl;
	if (binary_search(final.begin(),final.end(),n))
		cout<<n;
	else
	{
		it=upper_bound(final.begin(),final.end(),n);
		cout<<*it;
	}
}