#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		if (n==2)
			cout<<m<<endl;
		else if (n==1)
			cout<<0<<endl;
		else
		cout<<(n-1)+2*(m-1)<<endl;
	}
}