#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
	int l,r,t,c;
}player;
int main()
{
	int n,m;
	cin>>n>>m;
	player a[m];
	for (int i=0;i<m;i++)
			cin>>a[i].l>>a[i].r>>a[i].t>>a[i].c;
	int count=0;
	int total=0;
	for (int i=1;i<=n;i++)
	{
		int min;
		int min_p=0;
		count=0;
		for (int j=0;j<m;j++)
		{
			if (i>=a[j].l&&i<=a[j].r)
			{	
				if (count==0)
				{
					min=a[j].t;
					min_p=a[j].c;
					count++;
				}
				else
				{
					if (a[j].t<min)
					{
						min=a[j].t;
						min_p=a[j].c;
					}
				}
			}
		}
		//cout<<min_p<<endl;
		total+=min_p;
	}
	cout<<total;
}