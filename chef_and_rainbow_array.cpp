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
		for (ll i=1;i<=n;i++)
			cin>>a[i];
		ll front=1;
		ll back=n;
		ll count=1;
		int f=0;
		while (1)
		{
			if (front>=back)
			{
				if (a[front]==a[back]&&a[front]==7&&(count==7||count==6))
					break;
				else
				{
					f=1;
					break;
				}
			}
			else
			{
			if (a[front]==a[back]&&a[front]==count)
			{
				front++;
				back--;
			}
			else if (a[front]==a[back]&&a[front]==count+1)
			{
				count++;
			}
			else
			{
				f=1;
				break;
			}
			}
		}
		if (!f)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}