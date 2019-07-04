#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	//cout<<n<<" "<<t<<endl;
	// char* str;
	// str = new char [51];
	char str[51];
	cin>>str;
	// char *strtemp;
	// strtemp=new char [51];
	char strtemp[51];
	//cout<<str<<endl;
	// if (str[0]<str[1])
	// 	cout<<"yes"<<endl;
	for (int i=0;i<t;i++)
	{
		strcpy(strtemp,str);
		for (int j=0;j<n-1;j++)
		{
			if (str[j]<str[j+1])
			{
				//cout<<"inside if"<<endl;
				char temp;
				temp=strtemp[j];
				strtemp[j]=strtemp[j+1];
				strtemp[j+1]=temp;
			}
			//cout<<strtemp;
		}
		//cout<<strtemp;
		strcpy(str,strtemp);
	}
	cout<<str;
}