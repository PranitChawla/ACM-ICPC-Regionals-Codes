#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll ans[10];
	memset(ans,0,sizeof(ans));
	string s;
	cin>>s;
	for (ll i=0;i<n;i++)
	{
		char t;
		t=s[i];
		if (t>='0'&&t<='9')
		{
			// cout<<"check";
			ans[t-'0']--;
		}
		else
		{
			if (t=='L')
			{
				for (ll j=0;j<=9;j++)
				{
					if (ans[j]==0)
					{
						ans[j]++;
						break;
					}
				}
			}
			else if (t=='R')
			{
				// cout<<"check";
				for (ll j=9;j>=0;j--)
				{
					if (ans[j]==0)
					{
						ans[j]++;
						break;
					}
				}
			}
		}
	}
	for (ll i=0;i<10;i++)
		cout<<ans[i];
}