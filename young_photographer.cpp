#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,x;
	cin>>n>>x;
	int lf,rf;
	int flag=0;
	for (int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if (a>b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		if (i==0)
		{
			lf=a;
			rf=b;
		}
		else
		{
			if (a>rf||b<lf)
			{
				cout<<-1;
				flag=1;
				break;
			}
			else if (a>=lf&&b<=rf)
			{
				lf=a;
				rf=b;
			}
			else if (a>=lf&&b>=rf)
			{
				lf=a;
			}
			else if (a<=lf&&b<=rf)
			{
				rf=b;
			}
		}
	}
	if (flag==0)
	{
	int min,mind;
	for (int i=lf;i<=rf;i++)
	{
		if (i==lf)
		{
			min=i;
			mind=abs(i-x);
		}
		else if (abs(i-x)<mind)
		{
			mind=abs(i-x);
			min=i;
		}
	}
	cout<<abs(min-x);
}
}