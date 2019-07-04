#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	ll count=1;
	ll tot=1;
	for (ll i=0;i<s.length()-1;i++)
	{
		count=1;
		while (((int)s[i]-48)+((int)s[i+1]-48)==9)
		{
			count++;
			i++;
		}
		if (count!=1&&count%2!=0)
		{
			tot*=((count/2)+1);
		}
	}
	cout<<tot;
}