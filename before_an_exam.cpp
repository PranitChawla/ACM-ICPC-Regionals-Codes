#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum;
	cin>>n>>sum;
	int mi[n];
	int ma[n];
	for (int i=0;i<n;i++)
		cin>>mi[i]>>ma[i];
	int misum=0;
	int masum=0;
	for (int i=0;i<n;i++)
	{
		misum+=mi[i];
		masum+=ma[i];
	}
	if (sum>=misum&&sum<=masum)
	{
		cout<<"YES"<<endl;
		int ssf=0;
		int sch[n];
		for (int i=0;i<n;i++)
			{
				sch[i]=mi[i];
				ssf+=mi[i];
			}
		int need=sum-ssf;
		int i=0;
		while (need>0&&i<n)
		{
			int dif=ma[i]-mi[i];
			int temp=min(dif,need);
			need-=temp;
			sch[i]+=temp;
			i++;
		}
		for (int i=0;i<n;i++)
			cout<<sch[i]<<" ";
	}
	else
		cout<<"NO";
}