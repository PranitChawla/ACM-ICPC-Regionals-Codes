#include <bits/stdc++.h>
using namespace std;
int main()
{
	while (1)
	{
		int n;
		cin>>n;
		if (n==0)
			break;
		char str[200];
		cin>>str;
		int rows=strlen(str)/n;
		char table[rows][n];
		//cout<<rows*n<<" "<<strlen(str);
		int k=0;
		for (int i=0;i<rows;i++)
		{
			if (i%2==0)
			{
				for (int j=0;j<n;j++)
					{
						table[i][j]=str[k];
						k++;
					}
			}
			else 
			{
				for (int j=n-1;j>=0;j--)
					{
						table[i][j]=str[k];
						k++;
					}
			}
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<rows;j++)
				cout<<table[j][i];
			//cout<<endl;
		}
		cout<<endl;
	}
}