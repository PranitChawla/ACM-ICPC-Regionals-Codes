#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,m;
int ar[30][30];
bool check (int a,int b)
{
	int i,j,k,l;
	for (i=0;i<n-a+1;i++)
	{
		for (j=0;j<m-b+1;j++)
		{
			// if (a==4&&b==4)
			// 	cout<<i<<" "<<j<<endl;
			int flag=0;
		//cout<<i<<" "<<j<<endl;
			int g,h;
			g=i;
			h=j;
			for (k=g;k<g+a;k++)
			{
				for (l=h;l<h+b;l++)
				{
					//if (a==4&&b==4)
					//cout<<i<<" "<<j<<endl;
					if (ar[k][l]==1)
						{
							flag=1;
							break;
						}
				}
				if (flag==1)
					break;
				//cout<<endl;
			}
			if (flag==0)
				return true;
			//cout<<i<<" "<<j<<endl;
		}
	}
	return false;
}
int main()
{
	cin>>n>>m;
	string s[n];
	for (int i=0;i<n;i++)
	{
		cin>>s[i];
		for (int j=0;j<s[i].length();j++)
		{
			ar[i][j]=(int)s[i][j]-48;
		}
	}
	int per_max=INT_MIN;
	// for (int i=0;i<n;i++)
	// {
	// 	for (int j=0;j<m;j++)
	// 	{
	// 		cout<<ar[i][j];
	// 	}
	// 	cout<<endl;
	// }
	for (int i=n;i>=1;i--)
	{
		for (int j=m;j>=1;j--)
		{
			//cout<<i<<" "<<j<<endl;
			if (check(i,j))
			{
				//cout<<i<<" "<<j<<endl;
				if (2*(i+j)>per_max)
					per_max=2*(i+j);
				//cout<<2*(i+j);
				//return 0;
			}
		}
	}
	cout<<per_max;
	//cout<<"done"<<endl;
}