#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,m;
		cin>>n>>m;
		if (max(n,m)<=2)
		{
			if (!((n==2)&&(m==2)))
			{
				cout<<1<<endl;
				for (ll i=0;i<n;i++)
				{
					for (ll j=0;j<m;j++)
					{
						cout<<1<<" ";
					}
				cout<<endl;
				}
			}
			else
			{
				cout<<2<<endl;
				ll count=0;
				for (ll i=0;i<2;i++)
				{
					count++;
					for (ll j=0;j<2;j++)
					{
						cout<<count<<" ";
					}
					cout<<endl;
				}
			}
		}
		else if (min(n,m)<=2)
		{
			cout<<min(n,m)+1<<endl;
			if (min(n,m)==1)
			{
				if (n==1)
				{
					ll c=m/4;
					for (ll i=0;i<c;i++)
						cout<<"1 1 2 2 ";
					if (m%4==1)
						cout<<1<<" ";
					else if (m%4==2)
						cout<<"1 1 ";
					else if (m%4==3)
						cout<<"1 1 2";
					cout<<endl;
				}
				else if (m==1)
				{
					ll c=0;
					for (ll i=0;i<n;i++)
					{
						if (c%2==0)
							cout<<1<<endl;
						else
							cout<<2<<endl;
						if (i%2==1)
							c++;
					}

				}
			}
			else
			{
			ll max=min(n,m)+1;
			if (n==2&&m!=2)
			{
			for (ll i=0;i<n;i++)
			{
				ll count=1;
				for (ll j=0;j<m;j++)
				{
					cout<<count<<" ";
						if (count==max)
							count=1;
						else
							count++;
				}
				cout<<endl;
			}
			}
			else
			{
				ll count=1;
				for (ll i=0;i<n;i++)
				{
					cout<<count<<" "<<count<<endl;
					if (count==3)
						count=1;
					else
						count++;
				}
			}
		}
		}
		else
		{
			cout<<4<<endl;
			ll max=4;
			ll c=0;
			for (ll i=0;i<n;i++)
			{
				if (c%2==0)
				{
					ll count=1;
					for (ll j=0;j<m;j++)
					{
						cout<<count<<" ";
						if (count==max)
							count=1;
						else
							count++;
					}
				}
				else
				{
					ll count=3;
					for (ll j=0;j<m;j++)
					{
						cout<<count<<" ";
						if (count==max)
							count=1;
						else
							count++;
					}	
				}
				cout<<endl;
				if (i%2==1)
					c++;
			}
		}
	}
}