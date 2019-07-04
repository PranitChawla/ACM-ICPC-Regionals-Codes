#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int count=0;
	while (1)
	{
		int n,m,c;
		count++;
		cin>>n>>m>>c;
		if (n==0&&m==0&&c==0)
			break;
		else 
		{
			int co[n+1];
			for (int i=1;i<=n;i++)
				cin>>co[i];
			int onof [n+1];
			int tot_sum=0;
			memset(onof,0,sizeof(onof));
			int flag=0;
			int max_tot=INT_MIN;
			int seq[m];
			for (int i=0;i<m;i++)
			{
				cin>>seq[i];
			}
			for (int j=0;j<m;j++)
			{
			for (int i=1;i<=n;i++)
				{
					if (i==seq[j])
					{
						if (onof[i]==0)
						{
							tot_sum+=co[i];
							max_tot=max(tot_sum,max_tot);
							if (tot_sum>c)
							{
								flag=1;
								break;
							}
							onof[i]=1;
						}
						else if (onof[i]==1)
						{
							tot_sum-=co[i];
							max_tot=max(tot_sum,max_tot);
							onof[i]=0;
						}
				}
			}
		}
				cout<<"Sequence "<<count<<endl;
				if (flag==1)
				{
					cout<<"Fuse was blown."<<endl;
				}
				else
				{
					cout<<"Fuse was not blown."<<endl;
					cout<<"Maximal power consumption was "<<max_tot<<" amperes."<<endl;
				}
			}
			cout<<endl;
		}
	}	
