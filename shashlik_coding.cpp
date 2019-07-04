#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,k;
	cin>>n>>k;
	int c=2*k+1;
	// cout<<(double)(n/c);
	int t=ceil((double((double)n/c)));
	cout<<t<<endl;
	if (k==0)
	{
		for (int i=1;i<=n;i++)
			cout<<i<<" ";
	}
	else
	{
	int l;
	l=((n-(((t-1)*2*k)+t))/2)+1;
	//l=n%(k+1);
	// cout<<l<<endl;
	// if (l%(c)==0)
	// {
	// l=l+k+1;
	// }
	// else if (l==0)
	// 	l++;
	// else if (l!=1)
	// 	l--;
	for (int i=l;i<=n;i+=c)
	{
		cout<<i<<" ";
	}
	}
}