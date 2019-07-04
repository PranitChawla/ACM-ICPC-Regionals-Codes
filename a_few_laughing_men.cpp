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
		ll j[n];
		ll l[n];
		vector <ll> v;
		for (ll i=0;i<n;i++)
		{
			cin>>j[i];
		}
		for (ll i=0;i<n;i++)
			cin>>l[i];
		for (ll i=0;i<n;i++)
		{
			if (j[i]==1)
			{
				v.push_back(l[i]);
			}
		}
		if (v.size()<3)
			cout<<"#laughing_arjun"<<endl;
		else
		{
			ll c=0;
			ll index=0;
			for (ll i=0;i<v.size()-1;i++)
				{
					if (v[i+1]<=v[i])
					{
						index=i;		
						c++;
					}
				}
				if (c==1)
				{
					if (index==v.size()-2||index==0)
					{
						cout<<"#laughing_arjun"<<endl;		
					}
					else
					{
						if(v[index-1]<v[index+1]||v[index]<v[index+2])
							cout<<"#laughing_arjun"<<endl;	
						else
							cout<<"#itsnot_arjun"<<endl;					
					}

				}
				else if (c>1)
					cout<<"#itsnot_arjun"<<endl;
				else
					cout<<"#laughing_arjun"<<endl;		
		}	
	}
}