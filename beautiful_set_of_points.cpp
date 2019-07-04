#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<min(n+1,m+1);
	cout<<endl;
	int inity=m;
	int initx=0;
	for (int i=0;i<min(n+1,m+1);i++)
	{
		cout<<initx<<" "<<inity<<endl;
		initx++;
		inity--;
	}
}