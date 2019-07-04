#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
	{
		ll number;
		ll power;
	}point;
bool prime_factorize (ll A)
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
		//return fact_a;

		if (fact_a.size()==2)
		{
			if (fact_a[0].power==1&&fact_a[1].power==1)
				return true;
		}
		return false;
	}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		bool semi[201];
		memset(semi,0,sizeof(semi));
		for (int i=2;i<=200;i++)
		{
			if (prime_factorize(i))
				semi[i]=1;
		}
		int fl=0;
		for (int i=2;i<n;i++)
		{
			for (int j=2;j<n;j++)
			{
				if (semi[i]&&semi[j])
				{
					if (i+j==n)
					{
						//cout<<i<<" "<<j;
						fl=1;
						break;
					}
				}
			}
			if (fl)
				break;
		}
		if (fl)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}