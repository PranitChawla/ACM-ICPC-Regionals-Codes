#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int m,s;
	cin>>m>>s;
	if (9*m<s)
	{
		cout<<-1<<" "<<-1;
		return 0;
	}
	else if (s==0&&m!=1)
	{
		cout<<-1<<" "<<-1;
		return 0;
	}
	else if (s==0&&m==1)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	int ma[m];
	int mi[m];
	int num9=s/9;
	int left=m-num9;
	for (int i=0;i<num9;i++)
		ma[i]=9;
	if (left==1)
		ma[num9]=s%9;
	else if (left>1)
	{
		ma[num9]=s%9;
		for (int i=num9+1;i<m;i++)
		{
			ma[i]=0;
		}
	}
	if (s%9==0&&s/9!=m)
	{
		num9--;
		for (int i=0;i<num9;i++)
			mi[m-1-i]=9;
		int left=m-num9;
		if (left==1)
			mi[m-num9-1]=8;
		else if (left==2)
		{
			mi[m-num9-1]=8;
			mi[0]=1;
		}
		else
		{
			mi[0]=1;
			for (int i=1;i<=m-num9-2;i++)
				mi[i]=0;
			mi[m-num9-1]=8;
		}

	}
	else if (s%9==0&&s/9==m)
	{
		for (int i=0;i<m;i++)
			mi[i]=9;
	}
	else
	{
	for (int i=m-1;i>=m-num9;i--)
		mi[i]=9;
	// left=m-num9;
	if (left==1)
	{
		mi[m-num9-1]=s%9;
	}
	else if (left==2)
	{
		mi[m-num9-1]=s%9-1;
		mi[m-num9-2]=1;
	}
	else
	{
		mi[m-num9-1]=s%9-1;
		mi[0]=1;
		for (int i=1;i<=m-num9-2;i++)
			mi[i]=0;	
	}
	}
	for (int i=0;i<m;i++)
		cout<<mi[i];
	cout<<" ";
	for (int i=0;i<m;i++)
		cout<<ma[i];
}