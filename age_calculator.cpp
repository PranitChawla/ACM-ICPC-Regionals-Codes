	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
	int main()
	{
		ll t;
		cin>>t;
		while (t--)
		{
			ll n;
			cin>>n;
			ll a[n+1];
			ll s=0;
			for (ll i=1;i<=n;i++)
				{
					cin>>a[i];
					s+=a[i];
				}
			ll ya,ma,da;
			ll yb,mb,db;
			cin>>ya>>ma>>da>>yb>>mb>>db;
			ll ans=0;
			if (yb>ya+1)
			{
				ans+=s*(yb-ya-1);
				ll st=ya+1;
				ll e=yb-1;
				if (st%4==0)
				{
					if (e%4==0)
						ans+=((e-st)/4+1);
					else
						ans+=(ceil((double)e/4)-st/4);
				}
				else
				{
					if (e%4==0)
						ans+=(e/4-floor((double)st/4));
					else
						ans+=((floor((double)e/4))-floor((double)st/4));
				}
			}
			if (yb!=ya)
				{
					for (ll i=ma+1;i<=n;i++)
						ans+=a[i];
					if (ya%4==0)
						ans+=1;
					for (ll i=1;i<=mb-1;i++)
						ans+=a[i];
						ans+=(a[ma]-da+1);
						ans+=(db);
				}
			else
			{
				for (ll i=ma+1;i<=mb-1;i++)
					ans+=a[i];
			if (ma!=mb)
			{
				ans+=(a[ma]-da+1);
				ans+=(db);
			}
			else
			{
				ans+=(db-da+1);
			}
			}
			cout<<ans<<endl;
		 }	
	}