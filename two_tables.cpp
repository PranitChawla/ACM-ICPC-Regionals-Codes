#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isvalid (int a,int b,int c,int d)
{
	if (a<1||b<1||a>c||b>d)
		return false;
	else 
		return true;
}
int main()
{
	int na,ma;
	cin>>na>>ma;
	string s;
	int a[na+1][ma+1];
	for (int i=0;i<na;i++)
	{
		cin>>s;
		for (int j=0;j<ma;j++)
		{
			a[i+1][j+1]=int(s[j]-48);
		}
	}
	int nb,mb;
	cin>>nb>>mb;
	int b[nb+1][mb+1];
	for (int i=0;i<nb;i++)
	{
		cin>>s;
		for (int j=0;j<mb;j++)
		{
			b[i+1][j+1]=int(s[j]-48);
		}
	}
	int x,y,i,j;
	ll max;
	ll max_x;
	ll max_y;
	int count=0;
	for (x=-50;x<=50;x++)
	{
		for (y=-50;y<=50;y++)
		{
			ll sum=0;
			for (i=1;i<=na;i++)
			{
				for (j=1;j<=ma;j++)
				{
					if (isvalid(i+x,j+y,nb,mb))
					{
						sum+=a[i][j]*b[i+x][j+y];
					}
				}
			}
			if (count==0)
				{
					max_x=x;
					max_y=y;
					max=sum;
				}
			else
			{
				if (sum>max)
				{
					max=sum;
					max_x=x;
					max_y=y;
				}
			}
			count++;
		}
	}
	cout<<max_x<<" "<<max_y;
}