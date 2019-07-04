#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	map <ll,ll> table;
	cin>>n;
	ll win[n*(n-1)];
	ll lose[n*(n-1)];
	for (int i=0;i<n*(n-1)/2-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		win[i]=a;
		lose[i]=b;
		if (table.find(a)!=table.end())
		{
			int count=table.find(a)->second;
			count++;
			table.erase(table.find(a));
			table.insert(make_pair(a,count));
		}
		else if (table.find(a)==table.end())
		{
			table.insert(make_pair(a,1));	
		}
		if (table.find(b)!=table.end())
		{
			int count=table.find(b)->second;
			count++;
			table.erase(table.find(b));
			table.insert(make_pair(b,count));
		}
		else if (table.find(b)==table.end())
		{
			table.insert(make_pair(b,1));	
		}		
	}
	map <ll,ll>::iterator it;
	ll f,g;
	int count=0;
	for (it=table.begin();it!=table.end();it++)
	{
		//cout<<it->second<<endl;
		if (it->second==n-2&&count==0)
		{
			f=it->first;
			count++;
		}
		else if (it->second==n-2&&count==1)
		{
			g=it->first;
			count++;
		}
	}
	for (int i=0;i<n*(n-1)/2-1;i++)
	{
		if (win[i]==f)
		{
			for (int j=0;j<n*(n-1)/2-1;j++)
			{
				if (j!=i)
				{
					if (lose[i]==win[j]&&lose[j]==g)
					{
						//cout<<"FIRST"<<endl;
						cout<<f<<" "<<g;
						return 0;
					}
				}
			}
		}
	}
	for (int i=0;i<n*(n-1)/2-1;i++)
	{
		if (win[i]==g)
		{
			for (int j=0;j<n*(n-1)/2-1;j++)
			{
				if (j!=i)
				{
					if (lose[i]==win[j]&&lose[j]==f)
					{
						//cout<<"SECOND"<<endl;
						cout<<g<<" "<<f;
						return 0;
					}
				}
			}
		}
	}
	//cout<<"ELSE"<<endl;
	cout<<f<<" "<<g;
}	