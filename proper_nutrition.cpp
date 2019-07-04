#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,a,b;
	cin>>n>>a>>b;
	for (ll i=0;i<=n;i+=b)
	{
		if ((n-i)>=0)
		{
			if ((n-i)%a==0)
			{
				cout<<"YES"<<endl;
				cout<<(n-i)/a<<" "<<i/b<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
}