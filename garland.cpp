#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int a[26];
	int b[26];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>s1>>s2;
	string::iterator it;
	for (it=s1.begin();it!=s1.end();it++)
	{
		a[int(*it-'a')]++;
	}
	for (it=s2.begin();it!=s2.end();it++)
	{
		b[int(*it-'a')]++;
	}
	int flag=0;
	int area=0;
	for (int i=0;i<26;i++)
	{
		if (b[i]>0&&a[i]==0)
		{
			flag=1;
			break;
		}
		else if (a[i]==b[i])  
		{
			area+=a[i];
		}
		else if (a[i]>b[i])
		{
			area+=b[i];
		}
		else
			area+=a[i];
	}
	if (flag)
		cout<<-1;
	else
		cout<<area;
}