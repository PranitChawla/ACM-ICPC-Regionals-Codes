#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int q;
	cin>>q;
	for (int i=0;i<q;i++)
	{
		ll n,m,k;
		cin>>n>>m>>k;
		if (k<max(n,m))
			cout<<-1<<endl;
		else if (n==m)
		{
			if ((k-n)%2==0)
				cout<<k<<endl;
			else
				cout<<n+((k-n)/2)*2-(k-n)%2<<endl;

		}
		else if ((k-min(n,m))%2==0)
		{
			cout<<k<<endl;
		}
		else
			cout<<k-1<<endl;
	}
}