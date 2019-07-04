#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	if (s.length()<=2)
	{
		cout<<s;
		return 0;
	}
	bool f[s.length()];
	memset(f,0,sizeof(f));
	ll c=0;
	for (ll i=0;i<s.length()-1;i++)
	{
		c=1;
		while (s[i]==s[i+1])
		{
			c++;
			i++;
			if (c>=3)
			{
				f[i]=1;
			}
		}
	}
	string s2;
	for (ll i=0;i<s.length();i++)
	{
		if (f[i]==0)
			s2.push_back(s[i]);
	}
	//cout<<s2<<endl;
	if (s2.length()<=2)
	{
		cout<<s2;
		return 0;
	}
	bool f2[s2.length()];
	memset(f2,0,sizeof(f2));
	for (ll i=0;i<s2.length()-3;i++)
	{
		// if (i==5)
		// {
		// 	cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<" "<<s[i+3]<<endl;
		// }
		if (s2[i]==s2[i+1]&&s2[i+2]==s2[i+3])
		{
			f2[i+3]=1;
			i+=3;
		}
	}
	// for (int i=0;i<s2.length();i++)
	// 	cout<<f2[i]<<" ";
	string s3;
	for (ll i=0;i<s2.length();i++)
	{
		if (f2[i]==0)
			s3.push_back(s2[i]);
	}
	cout<<s3;
}