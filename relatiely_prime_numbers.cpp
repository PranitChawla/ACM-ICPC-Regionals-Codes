#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll l,r;
	cin>>l>>r;
	cout<<"YES"<<endl;
	for (ll i=l;i<r;i++)
	{
		cout<<i<<" "<<i+1<<endl;
		i++;
	}
}