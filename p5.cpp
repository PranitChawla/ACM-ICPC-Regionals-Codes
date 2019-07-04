	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
	int main()
	{
		ll n;
		cin>>n;
		map <string,set <string> > m;
			map <string,set <string> >::iterator it;
		for (ll i=0;i<n;i++)
		{
			string s;
			cin>>s;
			ll q;
			cin>>q;
			for (ll j=0;j<q;j++)
			{
				string t;
				cin>>t;
				if (m.find(s)!=m.end())
				{
					it=m.find(s);
					(it->second).insert(t);
				}
				else
				{
					set <string> temp;
					temp.insert(t);
					m.insert(make_pair(s,temp));
				}
			}
		}
			set <string>::iterator it1,it2;
			map < string,vecttor <ll > m2;
		for (it=m.begin();it!=m.end();it++)
		{
			for (it1=(it->second).begin();it1!=(it->second).end();it1++)
			{
				if(*it1=='\0') continue;
				for (it2=(it->second).begin();it2!=(it->second).end();it2++)
				{
					if(*it2=='\0') continue;
					if (it1!=it2)
					{
						string s1=*it1;
						string s2=*it2;
						ll len2=s2.length();
						ll len1=s1.length();
						if (len1>len2)
						{
							if (s1.compare(len1-len2,len1,s2)==0)
							{
								*it2='\0';
							}
						}
					}
				}	
			}
		}
		cout<<m.size()
		for (it=m.begin();it!=m.end();it++)
		{
			ll count=0;
			for (it1=(it->second).begin();it1!=(it->second).end();it1++)
			{
				if (*it1!='\0')
					count++;
			}
			cout<<it->first<<" "<<count<<" ";
			for (it1=(it->second).begin();it1!=(it->second).end();it1++)
			{
				if (*it1!='\0')
					cout<<*it1<<" ";
			}
			cout<<endl;
		}
	}
