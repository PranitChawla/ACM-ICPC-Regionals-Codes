#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> factorize (ll a)
{
	vector <ll> factor;
	for (ll i=2;i<=sqrt(a);i++)
	{
		int flag=0;
		while (a%i==0)
		{
			a/=i;
			flag=1;
		}
		if (flag==1)	
			factor.push_back(i);
	}
	if (a!=1)
		factor.push_back(a);
	return factor;
}
int main()
{
	ll n;
	cin>>n;
	vector <ll> fac1;
	vector <ll> fac2;
	//fac=factorize(n);
	vector <ll>::iterator it,it2;
	// for (it=fac.begin();it!=fac.end();it++)
	// {
	// 	cout<<*it<<" ";
	// }
	ll a,b;
	cin>>a>>b;
	fac1=factorize(a);
	fac2=factorize(b);
	for (int i=1;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		for (it=fac1.begin();it!=fac1.end();it++)
		{
			if (*it!=-1)
			{
				if (a%*it!=0&&b%*it!=0)
					*it=-1;
			}
		}
		for (it=fac2.begin();it!=fac2.end();it++)
		{
			if (*it!=-1)
			{
				if (a%*it!=0&&b%*it!=0)
					*it=-1;
			}
		}
	}
	int flag=0;
	for (it=fac1.begin();it!=fac1.end();it++)
	{
		if (*it!=-1)
		{
			flag=1;
			cout<<*it;
			break;
		}
	}
	if (flag==0)
	{
		for (it=fac2.begin();it!=fac2.end();it++)
	{
		if (*it!=-1)
		{
			flag=1;
			cout<<*it;
			break;
		}
	}
	}
	if (flag==0)
		cout<<-1;
}