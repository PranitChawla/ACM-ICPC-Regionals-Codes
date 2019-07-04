#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	int count=1;
	vector <int> l;
	if (n==1)
	{
		cout<<1<<endl;
		cout<<1<<endl;
		return 0;
	}
	for (int i=0;i<n;i++)
	{
		if (i==0)
		{
			continue;
		}
		if (a[i]!=1)
			{
				count++;
			}
		if (a[i]==1)
		{
			l.push_back(count);
			count=1;
		}
		if (i==n-1)
		{
			l.push_back(count);
		}
	}
	cout<<l.size()<<endl;
	vector <int>::iterator it;
	for (it=l.begin();it!=l.end();it++)
		cout<<*it<<" ";
}