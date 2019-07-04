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
	ll first=0;
	ll second=0;
	for (ll i=0;i<n-1;i++)
	{
		if (a[i]<=a[i+1])
			first++;
		else
			break;
	}
	if (first==n-1)
		cout<<0<<endl;
	else
	{
		for (ll i=first+1;i<n-1;i++)
		{
			if (a[i]<=a[i+1])
			second++;
			else
			break;
		}
		//cout<<first<<" "<<second;
		if (first==0&&second==0&&n!=2)
			cout<<-1<<endl;
		else if (first==0&&second==0&&n==2)
			cout<<1<<endl;
		else if (a[0]>=a[first+second+1]&&(first+second==n-2))
			cout<<second+1<<endl;
		else
			cout<<-1<<endl;
	}
}