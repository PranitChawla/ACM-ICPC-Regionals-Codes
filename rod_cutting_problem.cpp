#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int r[9];
int rod_cut (int p[],int n)
{
	int q;
	//cout<<r[n]<<endl;
	if (r[n]>=0)
		return r[n];
	if (n==0)
		q=0;
	else
	{
		q=INT_MIN;
		for (int i=1;i<=n;i++)
		{
			q=max(q,p[i]+rod_cut(p,n-i));
		}
	}
	r[n]=q;
	return q;
}
int main()
{
	// memset(r,INT_MIN,sizeof(r));
	for (int i=1;i<=8;i++)
		r[i]=INT_MIN;
	//cout<<r[8];
	int p[]={0,1,5,8,9,10,17,17,20};
	cout<<rod_cut(p,8);
}