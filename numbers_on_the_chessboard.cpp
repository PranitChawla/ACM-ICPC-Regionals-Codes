#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,q;
	cin>>n>>q;
	ll even=1;
	ll odd=1+ceil(n*n/2);
	for (ll i=0;i<q;i++)
	{
		ll r,c;
		cin>>r>>c;
		if (n%2==1)
		{
			ll done;
			if ((r+c)%2==0)
			{
				if (r%2==1)
				{
					done=n*(r-1)/2;
				}
				else
				{
					ll temp=ceil(n/2)+1;
					done=temp+n*(r-2)/2;
				}
				if (c%2==0)
			{
				done=done+(c-2)/2;
			}
			else
			{
				done=done+(c-1)/2;
			}
			cout<<even+done<<endl;
			}
			else
			{
				if (r%2==0)
				{
					done=n*(r-1)/2;
				}
				else
				{
					ll temp=ceil(n/2)+1;
					done=temp+n*(r-2)/2;
				}
				if (c%2==0)
			{
				done=done+(c-2)/2;
			}
			else
			{
				done=done+(c-1)/2;
			}
			if (r==1)
			cout<<done+odd<<endl;
			else
			cout<<done+odd+1<<endl;
			}	
		}
		else
		{
			ll done;
			done=(r-1)*ceil(n/2);
			if (c%2==0)
			{
				done=done+(c-2)/2;
			}
			else
			{
				done=done+(c-1)/2;
			}
			if ((r+c)%2==0)
				cout<<even+done<<endl;
			else
				cout<<odd+done<<endl;
		}
	}
}