#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	vector <ll> dp1,dp2;
	for (ll i=0;i<s.length();i++)
	{
		if (s[i]=='A'&&s[i+1]=='B')
			dp1.push_back(i);
	}
	for (ll i=0;i<s.length();i++)
	{
		if (s[i]=='B'&&s[i+1]=='A')
			dp2.push_back(i);
	}
	if (dp1.size()==0||dp2.size()==0)
		cout<<"NO";
	else
	{
		ll f=0;
		if (abs(dp1[0]-dp2[dp2.size()-1])>1||abs(dp1[dp1.size()-1]-dp2[0])>1)
			f=1;
		if (f)
			cout<<"YES";
		else
			cout<<"NO";
	}
}