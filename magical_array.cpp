#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll total=0;
	ll count=1;
	int flag=1;
	for (ll i=0;i<n-1;i++)
	{
		while (a[i]==a[i+1]&&i<n)
		{
			if (i==n-2)
				flag=0;
			i++;
			count++;
		}
		//cout<<count<<endl;
		total+=count*(count+1)/2;
		count=1;
	}
	cout<<total+flag;
}