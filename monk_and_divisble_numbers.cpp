#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	ll number;
	ll power;
}point;
ll modular_exp (ll x,ll n,ll M)
{
	if (n==0)
		return 1;
	else if (n%2==0)
		return (modular_exp((x*x)%M,n/2,M))%M;
	else 
		return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
}
vector <point> prime_factorize (ll A)
{
	vector <point> fact_a;
	for (ll i=2;i*i<=A;i++)
	{
		ll key=0;
		while (A%i==0)
		{
			A/=i;
			key++;
		}
		if (key)
		{
			point p;
			p.number=i;
			p.power=key;
			fact_a.push_back(p);
		}
	}
	if (A!=1)
		{
			point p;
			p.number=A;
			p.power=1;
			fact_a.push_back(p);
		}
	return fact_a;
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	ll A,B,C;
	cin>>A>>B>>C;
	vector <point> fact_a;
	vector <point> fact_b;
	fact_a=prime_factorize(A);
	fact_b=prime_factorize(B);
	vector <point>::iterator it;
	vector <point>::iterator it2;
	ll M=pow(10,9)+7;
	for (it=fact_b.begin();it!=fact_b.end();it++)
	{
		point p;
		p=*it;
		p.power=(p.power)*C;
		*it=p;
	}
	// for (it=fact_a.begin();it!=fact_a.end();it++)
	// {
	// 	point p;
	// 	p=*it;
	// 	cout<<p.number<<" "<<p.power;
	// 	cout<<endl;
	// }
	//cout<<endl;
	// cout<<fact_b[0].power<<endl;
	for (it=fact_b.begin();it!=fact_b.end();it++)
	{
		point p;
		p=*it;
		for (it2=fact_a.begin();it2!=fact_a.end();it2++)
		{
			point p2;
			p2=*it2;
			if (p2.number==p.number)
				{
					if (p.power>=p2.power)
					{
						p.power=p.power-p2.power;
						*it=p;
					}
					else 
					{
						p.power=0;
						*it=p;
					}
				} 
		}
	}
	// for (it=fact_b.begin();it!=fact_b.end();it++)
	// {
	// 	point p;
	// 	p=*it;
	// 	cout<<p.number<<" "<<p.power;
	// 	cout<<endl;
	// }
	ll result=1;
	for (it=fact_b.begin();it!=fact_b.end();it++)
	{
		ll temp;
		ll temp2;
		point p;
		p=*it;
		temp=(modular_exp(p.number%M,p.power,M))%M;
		temp=temp%M;
		result=result%M;
		result=(result*temp)%M;
	}
	cout<<result%M<<endl;
}
}