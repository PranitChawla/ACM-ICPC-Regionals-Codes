#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char string[n+2];
	char newstring[n+2];
	char tempstring[n+2];
	cin>>string;
	for (int i=1;i<=n;i++)
		newstring[i]=string[i-1];
	// for (int i=1;i<=n;i++)
	// 	cout<<newstring[i];
	// cout<<endl;
	for (int i=1;i<=n;i++)
	{
		for (int k=1;k<=n;k++)
			tempstring[k]=newstring[k];
		if (n%i==0)
		{
			for (int j=1;j<=i;j++)
			{
				tempstring[j]=newstring[i-j+1];
			}
		}
		for (int k=1;k<=n;k++)
			newstring[k]=tempstring[k];
	}
	for (int i=1;i<=n;i++)
		cout<<newstring[i];
}