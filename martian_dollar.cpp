#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,b;
	cin>>n>>b;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	int max=b;
	for (int i=0;i<n-1;i++)
	{
		int s=b/a[i];
		int r=b%a[i];
		for (int j=i+1;j<n;j++)
		{
			int tot;
			tot=a[j]*s+r;
			if (tot>max)
				max=tot;
		}
	}
	cout<<max;
}