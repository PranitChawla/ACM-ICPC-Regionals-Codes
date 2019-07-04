#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		char str[n+1];
		cin>>str;
		char str2[n+1];
		strcpy(str2,str);
		for (int i=0;i<n;i++)
		{
			if (i==n-1&&n%2==1)
				break;
			if (i%2==0)
			{
				char a;
				a=str[i];
				str2[i]=str[i+1];
				str2[i+1]=a;
			}
		}
			
		for (int i=0;i<n;i++)
		{
			int temp;
			temp=(int)str2[i];
			int temp_new;
			temp_new=25-temp;
			if (temp_new<0)
				temp_new=temp_new+98+96;
			char a;
			a=(char)temp_new;
			str2[i]=a;
		}
		cout<<str2<<endl;
	}
}