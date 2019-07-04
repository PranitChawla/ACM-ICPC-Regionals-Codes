#include <bits/stdc++.h>
using namespace std;
bool overlap (pair <int,int> a,pair <int,int> b)
{
	if (a.second<b.first||b.second<a.first)
		return false;
	return true;
}
int main()
{
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	pair <int,int> a[p];
	pair <int,int> b[q];
	for (int i=0;i<p;i++)
		cin>>a[i].first>>a[i].second;
	for (int i=0;i<q;i++)
		cin>>b[i].first>>b[i].second;
	int count=0;
	pair <int,int> a1,b1;
	// a1=make_pair(2,3);
	// b1=make_pair(4,5);
	for (int i=l;i<=r;i++)
	{
		for (int j=0;j<q;j++)
			{
				b[j].first+=i;
				b[j].second+=i;
			}
			int flag=0;
			for (int k=0;k<p;k++)
			{
				for (int e=0;e<q;e++)
				{
					// cout<<a[k].first<<" "<<a[k].second<<"     ";
					// 		cout<<b[e].first<<" "<<b[e].second<<endl;
					if (overlap(a[k],b[e]))
						{
							flag=1;
							// cout<<a[k].first<<" "<<a[k].second<<"     ";
							// cout<<b[e].first<<" "<<b[e].second<<endl;
						}
				}
			}
			if (flag==1)
				count++;
			for (int j=0;j<q;j++)
			{
				b[j].first-=i;
				b[j].second-=i;
			}
	}
	cout<<count;
	
}