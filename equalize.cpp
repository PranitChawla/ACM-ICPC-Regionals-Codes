#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	ll count=0;
	for (ll i=0;i<a.length()-1;i++)
	{
		if (a[i]!=b[i])
		{
			if (a[i+1]==b[i]&&a[i]==b[i+1])
				{
					count++;
					char t;
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
			else
				count++;
		} 
	}
	if (a[a.length()-1]!=b[a.length()-1])
		count++;
	cout<<count;
}