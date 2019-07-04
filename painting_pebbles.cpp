#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+1];
	vector <int>  list[n+1];
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	// int colour [k+1][n+1];
	// for (int i=1;i<=k;i++)
	// {
	// 	for (int j=1;j<=n;j++)
	// 		colour[i][j]=0;
	// }
	// int left[n];
	// for (int i=1;i<=n;i++)
	// 	left[i]=a[i];
	// for (int i=1;i<=n;i++)
	// {
	// 	if (a[i]<=k)
	// 	{
	// 		for (int j=1;j<=a[i];j++)
	// 		{
	// 				colour[j][i]++;
	// 				list[i].push_back(j);
	// 				//temp--;
	// 				left[i]--;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		for (int j=1;j<=k;j++)
	// 		{
	// 			colour[j][i]++;
	// 			list[i].push_back(j);
	// 			left[i]--;
	// 		}
	// 	}
	// }
	// // for (int i=1;i<=n;i++)
	// // 	cout<<left[i]<<" ";
	// for (int i=1;i<=n;i++)
	// {
	// 	for (int j=1;j<=left[i];j++)
	// 	{
	// 		//cout<<j<<" "<<i<<" ";
	// 		if (left[i]<=k)
	// 		{
	// 		colour[j][i]++;
	// 		list[i].push_back(j);
	// 		}
	// 		else
	// 		{
	// 			int temp=left[i];
	// 			while (temp>0)
	// 			{
	// 				for (int l=1;l<=k;l++)
	// 				{
	// 					if (temp<=0)
	// 						break;
	// 					colour[l][i]++;
	// 					list[i].push_back(l);
	// 					temp--;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	//cout<<endl;
	// }
	// for (int i=1;i<=k;i++)
	// {
	// 	for (int j=1;j<=n;j++)
	// 	{
	// 		cout<<colour[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// // for (int i=1;i<=n;i++)
	// // 	{
	// // 		vector <int>::iterator it;
	// // 		for (it=list[i].begin();it!=list[i].end();it++)
	// // 		{
	// // 			cout<<*it<<" ";
	// // 		}
	// // 		cout<<endl;
	// // 	}
	// int flag=0;
	// for (int i=1;i<=k;i++)
	// {
	// 	for (int j=1;j<=n;j++)
	// 	{
	// 		for (int m=j+1;m<=n;m++)
	// 		{
	// 			if (abs(colour[i][j]-colour[i][m])>1)
	// 			{
	// 				flag=1;
	// 				break;
	// 			}
	// 		}
	// 	}
	// }
	// if (flag==1)
	// 	cout<<"NO";
	// else
	// {
	// 	cout<<"YES"<<endl;
	// 	for (int i=1;i<=n;i++)
	// 	{
	// 		vector <int>::iterator it;
	// 		for (it=list[i].begin();it!=list[i].end();it++)
	// 		{
	// 			cout<<*it<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// }
	int flag=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=i+1;j<=n;j++)
		{
			if (abs(a[j]-a[i])>k)
			{
				flag=1;
				break;
			}
		}
	}
	if (flag==1)
		cout<<"NO";
	else
	{
		int min;
		min=a[1];

		for (int i=2;i<=n;i++)
		{
			if (a[i]<min)
				min=a[i];
		}
		for (int i=1;i<=n;i++)
		{
			for (int j=0;j<min;j++)
				list[i].push_back(1);
		}
		for (int i=1;i<=n;i++)
		{
			int left=a[i]-min;
			int j=1;
			while (left)
			{
				list[i].push_back(j);
				j++;
				left--;
			}
		}
		cout<<"YES"<<endl;
		for (int i=1;i<=n;i++)
		{
			vector <int>::iterator it;
			for (it=list[i].begin();it!=list[i].end();it++)
				cout<<*it<<" ";
			cout<<endl;
		}
	}
}