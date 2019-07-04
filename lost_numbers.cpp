#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	bitset <64> b1(a);
	bitset <64> b2(b);
	bitset <64> b3(c);
	// cout<<b1<<endl;
	// cout<<b2<<endl;
	// cout<<b3<<endl;
	bitset <64> ans1;
	bitset <64> ans2;
	ll vis[64];
	memset(vis,0,sizeof(vis));
	ll f=0;
	for (ll i=0;i<64;i++)
	{
		if (b3[i]==1)
		{
			if (b2[i]==1||b1[i]==0)
			{
				f=1;
				break;
			}
			else
			{
				if (!vis[i])
				{
				ans1[i]=1;
				ans2[i]=1;
				vis[i]=1;
				}
			}
		}
	}
	for (ll i=0;i<64;i++)
	{
		if (b1[i]==0)
		{
			if (b3[i]==1||b2[i]==1)
			{
				f=1;
				break;
			}
		else
		{
			if (!vis[i])
				{
				ans1[i]=0;
				ans2[i]=0;
				vis[i]=1;
				}
		}
		}
	}
	for (ll i=0;i<64;i++)
	{
		if (b2[i]==1)
		{
			if (b1[i]==0||b3[i]==1)
			{
				f=1;
				break;
			}
		else
		{
			if (!vis[i])
				{
				ans1[i]=1;
				ans2[i]=0;
				vis[i]=1;
				}
		}
		}
	}
	// cout<<ans1.to_ulong()<<endl;
	// cout<<ans2.to_ulong()<<endl;
	if (f)
		cout<<-1;
	else
		cout<<ans1.to_ulong()<<" "<<ans2.to_ulong();
	// ll a1=15|10;
	// ll a2=15^10;
	// ll a3=15&10;
	// 	cout<<a1<<" "<<a2<<" "<<a3;
}