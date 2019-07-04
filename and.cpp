#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int flag=0;
	for (int i=0;i<n-1;i++)
	{
		if (a[i]==a[i+1])
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
		cout<<0<<endl;
	else
	{
		flag=0;
		for (int i=0;i<n;i++)
		{
			ll val;
			val=a[i]&x;
			//cout<<val<<endl;
			int p=0;
			int q=0;
			if (i!=0)
			p=binary_search(a,a+i-1,val);
			if (i!=n-1)
			q=binary_search(a+i+1,a+n,val);
			//cout<<p<<" "<<q<<endl;
			if (p||q)
			{
				cout<<1<<endl;
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
		for (int i=0;i<n;i++)
		{
			a[i]=a[i]&x;
		}
		sort(a,a+n);
		for (int i=0;i<n-1;i++)
		{
		if (a[i]==a[i+1])
		{
			flag=1;
			break;
		}
		}
		}
		if (flag==0)
			cout<<-1;
	}
}
