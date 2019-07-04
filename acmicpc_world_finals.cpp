#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,m,c;
		cin>>n>>m>>c;
		ll a[c+1];
		for (ll i=1;i<=c;i++)
			cin>>a[i];
		ll ltf=1;
		ll k=1;
		for (ll i=0;i<n;i++)
		{
			if(ltf)
			{
				for(ll j=0;j<m;j++)
				{
					if(a[k]==0)
					{
						k++;
					}
					cout<<k<<" ";
					a[k]--;
				}
				ltf=0;
			}
			else
			{
				std::vector<ll> v;
				for(ll j=m-1;j>=0;j--)
				{
					if(a[k]==0)
					{
						k++;
					}
					//cout<<k<<" ";
					v.push_back(k);
					a[k]--;
				}
				for(ll j=m-1;j>=0;j--)
					cout<<v[j]<<" ";
				ltf=1;
			}
			cout<<endl;

			
		}

	}

}