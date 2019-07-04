#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		ll sw=-1;
		for (ll i=0;i<n-1;i++)
		{
			if (a[i]>a[i+1])
			{
				sw=i;
				break;
			}
		}
		if (sw==-1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		//sw++;
		int f1=1;
		int f2=1;
		for (ll i=0;i<sw;i++)
		{
			if (a[i]>a[i+1])
			{
				f1=0;
				break;
			}
		}
		for (ll i=sw+1;i<n-1;i++)
		{
			if (a[i]>a[i+1])
			{
				f2=0;
				break;
			}
		}
	//	cout<<a[sw]<<endl;
		if (f1&&f2&&a[0]>=a[n-1])
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
}