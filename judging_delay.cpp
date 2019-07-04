#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for (int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		int c=0;
		for (int i=0;i<n;i++)
		{
			if (b[i]-a[i]>5)
				c++;
		}
		cout<<c<<endl;
	}
}