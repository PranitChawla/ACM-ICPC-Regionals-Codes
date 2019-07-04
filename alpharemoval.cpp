#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,k;
	cin>>n>>k;
	char string[n+10];
	cin>>string;
	for (long int i=0;i<k;i++)
	{
		for (int j=97;j<=122;j++)
		{
			int flag=0;
			for (long int l=0;l<n;l++)
			{
				if ((int)string[l]==j)
				{
					string[l]=' ';
					flag=1;
					break;
				}
			}
			if (flag==1)
				break;
		}
	}
	for (long int i=0;i<n;i++)
	{
		if (string[i]!=' ')
			cout<<string[i];
	}
}