#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll r,c;
	r=0;
	c=0;
	ll ans=INT_MIN;
	for (ll i=0;i<n;i++)
	{
		while (r<n&&(s[r]=='a'||c<k))
			{
				if (s[r]=='b')
					c++;
				r++;
			}	
			ans=max(ans,r-i);
			if (s[i]=='b')
				c--;
	}
	c=0;
	r=0;
	for (ll i=0;i<n;i++)
	{
		while (r<n&&(s[r]=='b'||c<k))
			{
				if (s[r]=='a')
					c++;
				r++;
			}	
			ans=max(ans,r-i);
			if (s[i]=='a')
				c--;
	}
	cout<<ans;
}