#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		ll n=s.length();
		ll f[27];
		memset(f,0,sizeof(f));
		for (ll i=0;i<n;i++)
		{
			f[s[i]-'a'+1]++;
		}
		ll mi=INT_MAX;
		for (ll i=1;i<=sqrt(n);i++)
		{
			vector <ll> v1;
			vector <ll> v2;
			if (n%i==0)
			{
				ll p=i;
				ll q=n/i;
				cout<<p<<" "<<q<<endl;
				for (ll j=1;j<=26;j++)
				{
					v1.push_back(abs(f[j]-p));
					v2.push_back(abs(f[j]-q));
				}
				sort(v1.begin(),v1.end());
				sort(v2.begin(),v2.end());
				ll ans1=0;
				ll ans2=0;
				for (ll j=0;j<q;j++)
					ans1+=(v1[j]);
				for (ll j=0;j<p;j++)
					ans2+=v2[j];
				ll a=min(ans1,ans2);
				mi=min(mi,a);
			}
		}
		cout<<mi<<endl;
	}
}