#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int fl=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]==1)
			fl=1;
	}
	if (fl)
		cout<<"HARD";
	else
		cout<<"EASY";
}