#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector <int> dups;
	int a,b;
	for (int i=0;i<m;i++)
	{
		cin>>a>>b;
		dups.push_back(a);
		dups.push_back(b);
	}
	int centre;
	for (int i=1;i<=n;i++)
	{
		vector <int>::iterator it;
		int flag=0;
		for (it=dups.begin();it!=dups.end();it++)
		{
			if (*it==i)
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			centre=i;
			break;
		}
	}
	cout<<n-1<<endl;
	for (int i=1;i<=n;i++)
	{
		if (i!=centre)
			cout<<centre<<" "<<i<<endl;
	}
}