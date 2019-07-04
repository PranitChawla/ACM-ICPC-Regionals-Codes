#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	string::iterator it;
	char prev;
	prev=*(s.begin());
	ll count=1;
	ll total=0;
	int flag=0;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it!=prev||it==(s.end()-1))
		{
			flag=1;
			total+=(count*(count-1));
			count=1;
		}
		if (*it==(*(it+1)))
		{
			count++;
		}
			prev=*(it);
	}
	cout<<total+s.length();
}