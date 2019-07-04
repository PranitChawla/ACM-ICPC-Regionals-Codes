#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	string::iterator it,star,it2;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it=='*')
			break;
	}
	if (n-m>=2)
	{
		cout<<"NO";
	}
	else if (it==s.end())
	{
		if (s.compare(t)==0)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
	{
		star=it;
		int flag1=0;
		int flag2=0;
		//it=s.end()-1;
		//cout<<*it;
		//cout<<*star;
		for (it=t.end()-1,it2=s.end()-1;it2>star,it>=t.begin();it--,it2--)
		{
			if (it2==star)
				break;
			if (*it!=*it2)
			{
				// cout<<*it<<" "<<*it2<<endl;
				// cout<<"check"<<endl;
				flag1=1;
				break;
			}
		}
		for (it=t.begin(),it2=s.begin();it2<star,it!=t.end();it++,it2++)
		{
			if (it2==star)
				break;
			if (*it!=*it2)
			{
				flag2=1;
				break;
			}
		}
		if (flag1==0&&flag2==0)
			cout<<"YES";
		else
			cout<<"NO";
	}
}
	