#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	ll e=0;
	ll o=0;
	ll tot[n+1];
	tot[1]=0;
	if (a[1]%2==0)
	{
		e=1;
		o=0;
	}
	else
	{
		o=1;
		e=0;
	}
	ll sum=0;
	for (ll i=2;i<=n;i++)
	{
			if (a[i]%2==0)
				e++;
			else
				o++;
	//		cout<<e<<" "<<o<<endl;
		if (o==e)
		{
			tot[i]=o+1;
			//sum+=tot[i];
			// if (a[i]%2==0)
			// {
			// 	e=1;
			// 	o=0;
			// }
			// else
			// {
			// 	o=1;
			// 	e=0;
			// }
		}
		else
		{
			tot[i]=tot[i-1];
			// o=0;
			// e=0;
			if (a[i]%2==0)
			{
				e=1;
				o=0;
			}
			else
			{
				o=1;
				e=0;
			}
		}
	}
	for (ll i=1;i<=n;i++)
		{
			cout<<tot[i]<<" ";
			sum+=tot[i];
		}
		//cout<<sum;
	//cout<<tot[n]*2;
}