#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		map < ll, vector <ll> > m;
		ll K;
		cin>>K;
		ll a[n+1];
		for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
			m[a[i]].push_back(i);
		}
		ll ans=0;
		map <ll,vector <ll> >::iterator it;
		for (ll i=1;i<=n;i++)
		{
			for (ll j=i;j<=n;j++)
			{
				ll mi;
				if ((K%(j-i+1))==0)
					mi=(K/(j-i+1));
				else
					mi=(K/(j-i+1))+1;
				ll sum=0;
				ll f=0;
				for (it=m.begin();it!=m.end();it++)
				{
					ll le=lower_bound((it->second).begin(),(it->second).end(),i)-(it->second).begin();
					ll up=upper_bound((it->second).begin(),(it->second).end(),j)-(it->second).begin();
					sum+=((up-le)*mi);
					if (sum>=K)
					{
						ll num=up-le;
						ll le1=lower_bound(m[num].begin(),m[num].end(),i)-(m[num]).begin();
						ll up1=upper_bound(m[num].begin(),m[num].end(),j)-(m[num]).begin();
						if ((up1-le1)>0)
						{
						f=1;	
						}
						break;
					}
				}
				if (f)
					ans++;
			}
		}
		cout<<ans<<endl;
	}
}