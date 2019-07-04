#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll count_ones (ll n)
{
	ll c=0;
	while (n>0)
	{
		if (n%2==1)
			c++;
		n/=2;
	}
	return c;
}
int main()
{
	ll n,k;
	cin>>n>>k;
	if (k>n||k<count_ones(n))
		cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		ll i=n;
		ll count=0;
		vector <ll> v;
		while (i>0)
		{
			ll z=i-i/2;
			ll pc=1<<count;
			ll pc1=1<<(count+1);
			if (k>=z)
			{
				for (ll j=0;j<i-k;j++)
					v.push_back(pc1);
				for (ll j=0;j<2*k-i;j++)
					v.push_back(pc);
				break;
			}
			else
			{
				if (i%2==1)
					{
						v.push_back(pc);
						k--;
					}
				i/=2;
				count++;
			}
		}
		for (ll i=0;i<v.size();i++)
			cout<<v[i]<<" ";
	}
}