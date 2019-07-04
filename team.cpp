#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	if (m<n-1||m>2*(n+1))
		cout<<-1;
	else
	{
		if (m==n-1)
		{
			for (int i=0;i<n+m;i++)
			{
				if (i%2==0)
					cout<<0;
				else
					cout<<1;
			}
		}
		else if (m==n)
		{
			cout<<1;
			for (int i=0;i<n+m-1;i++)
			{
				if (i%2==0)
					cout<<0;
				else
					cout<<1;
			}	
		}
		else if (m==n+1)
		{
			cout<<1;
			for (int i=0;i<n+m-2;i++)
			{
				if (i%2==0)
					cout<<0;
				else
					cout<<1;
			}	
			cout<<1;	
		}
		else
		{
			ll ex=m-(n+1);
			ll count=0;
			for (int i=0;i<2*n+1;i++)
			{
				if (i%2==0)
				{
					if (count<ex)
					{
						cout<<11;
						count++;
					}
					else
						cout<<1;
				}
				else 
					cout<<0;
			}
		}
	}
}