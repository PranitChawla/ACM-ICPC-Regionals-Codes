#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll q;
	cin>>q;
	while (q--)
	{
		ll k,n;
		cin>>n>>k;
		ll a[n+1];
		ll num=0;
		for (ll i=1;i<=n;i++)
			{
				cin>>a[i];
				if (a[i]%2==1)
					num++;
			}
		vector <ll> ans;
		if (num<k||(num%2)!=(k%2))
		{
			// cout<<num<<endl;
			cout<<"NO"<<endl;
		}
		else
			{
				cout<<"YES"<<endl;
				ll c=0;
				for (ll i=1;i<=n;i++)
				{
					if (a[i]%2==1)
					{
						if (c<k-1)
						{
							ans.push_back(i);
							c++;
						}
					}
				}
				for (ll i=0;i<ans.size();i++)
					cout<<ans[i]<<" ";
				cout<<n;
				cout<<endl;
			}
	}
}