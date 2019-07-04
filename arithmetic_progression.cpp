#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	vector <ll> diff,diffs;
	int f=0;
	for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			if (i!=0)
			{
				if (a[i]!=a[i-1])
					f=1;
			}
		}
	sort(a,a+n);
	if (f==0&&n>1)
	{
		cout<<1<<endl;
		cout<<a[0];
	}
	else 
		{		
	if (n==1)
		cout<<-1<<endl;
	else if (n==2)
	{
		if ((a[1]-a[0])%2)
		{
			cout<<2<<endl;
			cout<<a[0]-(a[1]-a[0])<<" "<<a[1]+(a[1]-a[0]);
		}
		else
		{
			cout<<3<<endl;
			cout<<a[0]-(a[1]-a[0])<<" "<<a[0]+(a[1]-a[0])/2<<" "<<a[1]+(a[1]-a[0]);
		}
	}
	else
	{
		for (ll i=0;i<n-1;i++)
		{
			diff.push_back(a[i+1]-a[i]);
			diffs.push_back(a[i+1]-a[i]);
		}
		sort(diffs.begin(),diffs.end());
		int c=0;
		ll d;
		for (ll i=0;i<diffs.size()-1;i++)
		{
			if (diffs[i+1]!=diffs[i]&&c==0)
			{
				c=1;
			}
			else if (diffs[i+1]!=diffs[i]&&c==1)
			{
				c++;
				break;
			}
		}
		if (c==0)
		{
			cout<<2<<endl;
			cout<<a[0]-(a[1]-a[0])<<" "<<a[n-1]+(a[1]-a[0]);
		}
		else if (c==1)
		{
			for (ll i=0;i<diffs.size()-2;i++)
			{
				if (diffs[i]!=diffs[i+1])
				{
					c++;
					break;
				}
			}
			if (c==2)
				cout<<0<<endl;
			else 
			{
				d=diffs[diffs.size()-1];
				ll in;
				for (ll i=0;i<diff.size();i++)
				{
					if (diff[i]==d)
					{
						in=i;
						break;
					}
				}
				if (d%2)
					cout<<0<<endl;
				else 
				{
					if (d/2!=diffs[0])
						cout<<0<<endl;
					else
					{
					cout<<1<<endl;
					cout<<a[in]+d/2<<endl;
					}
				}
			}

		}
		else if (c==2)
			cout<<0<<endl;
	}
}
}