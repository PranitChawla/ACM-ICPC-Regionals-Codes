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
		string s[n];
		ll freq[4];
		memset(freq,0,sizeof(freq));
		for (ll i=0;i<n;i++)
		{
			cin>>s[i];
			if (s[i].compare("aa")==0)
				freq[0]++;
			else if (s[i].compare("ab")==0)
				freq[1]++;
			else if (s[i].compare("ba")==0)
				freq[2]++;
			else if (s[i].compare("bb")==0)
				freq[3]++;
		}
		ll fa=0;
		ll fb=0;
		if (freq[0]%2==1)
		{
			fa=1;
		}
		if (freq[3]%2==1)
		{
			fb=1;
		}
		freq[0]/=2;
		freq[3]/=2;
		ll min1=min(freq[1],freq[2]);
		string s1;
		for (ll i=0;i<freq[0];i++)
		{
			s1.push_back('a');
			s1.push_back('a');
		}
		for (ll i=0;i<min1;i++)
		{
			s1.push_back('a');
			s1.push_back('b');
		}	
		for (ll i=0;i<freq[3];i++)
		{
			s1.push_back('b');
			s1.push_back('b');
		}	
		if (fa==1)
		{
			s1.push_back('a');
		}
		else if (fa==0&&fb==1)
		{
			s1.push_back('b');
		}
		string s2(s1);
		reverse(s2.begin(),s2.end());
		s1=s1+s2;
		cout<<s1<<endl;
	}
}