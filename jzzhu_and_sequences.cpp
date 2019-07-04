#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll x,y,n;
	cin>>x>>y>>n;
	ll M=pow(10,9)+7;
	int r=n%6;
	{
		if (r==0)
			cout<<((x-y)+2*M)%M;
		else if (r==1)
			cout<<(x+2*M)%M;
		else if (r==2)
			cout<<(y+2*M)%M;
		else if (r==3)
			cout<<(y-x+2*M)%M;
		else if (r==4)
			cout<<(-x+2*M)%M;
		else if (r==5)
			cout<<(-y+2*M)%M;
	}	
}