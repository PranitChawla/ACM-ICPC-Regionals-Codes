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
		string s;
		cin>>s;
		ll i,j;
		for (i=0;i<n;i++)
		{
			if (s[i]=='>')
				break;
		}
		for (j=n-1;j>=0;j--)
		{
			if (s[j]=='<')
				break;
		}
		cout<<min(i,n-j-1)<<endl;
	}
}