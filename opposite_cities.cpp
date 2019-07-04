#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		for (ll i=1;i<=n;i++)
			cin>>a[i];
		if (n%2==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			int flag;
			for (ll i=1;i<=n/2;i++)
			{
				flag=0;
				if (a[i]!=-1&&a[i+n/2]!=-1)
				{
					if (a[i]!=a[i+n/2])
					{
						cout<<"NO"<<endl;
						flag=1;
						break;
					}
				}
				else if (a[i]!=-1&&a[i+n/2]==-1)
				{
					a[i+n/2]=a[i];
				}
				else if (a[i+n/2]!=-1&&a[i]==-1)
					a[i]=a[i+n/2];
				else
					{
						a[i]=1;
						a[i+n/2]=1;
					}
			}
			if (flag==0)
			{
			cout<<"YES"<<endl;
			for (ll i=1;i<=n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
			}
			else
				continue;
		}
	}
}