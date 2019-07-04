#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,d;
	cin>>n>>d;
	int m;
	cin>>m;
	// int x[m];
	// int y[m];
	int x,y;
	for (int i=0;i<m;i++)
	{
		// cin>>x[i]>>y[i];
		cin>>x>>y;
		if ((x+y-d>=0)&&(x+y-2*n+d)<=0&&(y-x-d)<=0&&(y-x+d)>=0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}