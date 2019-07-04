#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,s;
	cin>>n>>s;
	if (s<=n)
		cout<<1<<endl;
	else
	{
		if (s%n==0)
			cout<<s/n;
		else
			cout<<(s/n+1)<<endl;
	}
}