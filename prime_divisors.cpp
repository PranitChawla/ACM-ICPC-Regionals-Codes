#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	ll value;
	ll sum_prime;
}point1;
typedef struct 
{
	ll number;
	ll power;
}point;
ll check_sum (ll A)
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
	ll sum=0;
	vector <point>::iterator it;
	for (it=fact_a.begin();it!=fact_a.end();it++)
	{
		point p;
		p=*it;
		sum+=p.number;
	}
	return sum;
}
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		int n;
		ll count=0;
		cin>>n;
		ll a[n];
		ll size;
		size=pow(10,5)+2;
		point1 hash[size];
		ll reps=0;
		for (ll i=0;i<size;i++)
			{
				hash[i].value=0;
				hash[i].sum_prime=0;
			}
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			if (hash[a[i]].value==a[i])
				reps++;
			else
			{
			hash[a[i]].value=a[i];
			hash[a[i]].sum_prime=check_sum(a[i]);
			}
		}
		//cout<<hash[2].value;
		ll max=a[0];
		for (ll i=0;i<n;i++)
		{
			if (a[i]>max)
				max=a[i];
		}
		ll count1=0;
		for (ll i=0;i<n;i++)
		{
			ll val;
			val=a[i];
			for (ll j=0;j<=max;j=j+val)
			{
					if (j!=val)
					{
					if (hash[j].value!=0)
					{
						if (hash[j].value%val==0)
						{
							if (hash[val].sum_prime!=0)
							{
								if (hash[j].sum_prime%hash[val].sum_prime==0)
									count1++;
							}
						}
					}
				}
			}
		}
		cout<<count1+2*reps<<endl;
}
}
