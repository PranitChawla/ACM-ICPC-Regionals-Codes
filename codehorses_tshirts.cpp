#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string list_o[n+1];
	string list_n[n+1];
	for (int i=0;i<n;i++)
		cin>>list_o[i];
	for (int i=0;i<n;i++)
		cin>>list_n[i];
	bool check_old[n+1];
	bool check_new[n+1];
	for (int i=0;i<n;i++)
		{
			check_new[i]=0;
			check_old[i]=0;
		}
	int total=0;
	for (int i=0;i<n;i++)
	{
		string::iterator it;
		string::iterator ite;
		it=list_o[i].begin();
		ite=list_o[i].end();
		ite--;
		// cout<<*it<<" "<<*ite;
		// cout<<endl;
		if (check_old[i]==0)
		{	
			for (int k=0;k<n;k++)
			{
				string::iterator itj;
				string::iterator itje;
				itj=list_n[k].begin();
				itje=list_n[k].end();
				itje--;
				// cout<<*itj<<" "<<*itje;
				// cout<<endl;
				if (check_new[k]==0)
				{
				if (list_o[i].size()==list_n[k].size())
				{
					if (list_o[i].size()==1)
					{
						if (*it==*itj)
						{
							check_old[i]=1;
							check_new[k]=1;
							break;
						}
					}
					else
					{
						if (*ite==*itje)
						{
							check_old[i]=1;
							check_new[k]=1;
							break;
						}
					}
				}
				}
			}
		}
// 		for (int i=0;i<n;i++)
// 	cout<<check_old[i]<<" ";
// cout<<endl;
// for (int i=0;i<n;i++)
// 	cout<<check_new[i]<<" ";
// cout<<endl;
	}
	for (int i=0;i<n;i++)
	{
		if (check_old[i]==0)
			total++;
	}
cout<<total;
// for (int i=0;i<n;i++)
// 	cout<<check_old[i]<<" ";
// cout<<endl;
// for (int i=0;i<n;i++)
// 	cout<<check_new[i]<<" ";
}