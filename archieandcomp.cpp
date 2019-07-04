#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	for (int i=0;i<T;i++)
	{
		double a,b,n;
		scanf("%lf %lf %lf",&a,&b,&n);
		// if (pow(a,n)>pow(b,n))
		// 	cout<<1<<endl;
		// else if (pow(a,n)<pow(b,n))
		// 	cout<<2<<endl;
		// else 
		// 	cout<<0<<endl;
		if ((int)n%2==0)
		{
			a=fabs(a);
			b=fabs(b);
			if (a==b)
			{
				cout<<0<<endl;
				continue;
			}
			else if (a>b)
			{
				cout<<1<<endl;
				continue;
			}
			else 
			{
				cout<<2<<endl;
				continue;
			}
		}
		else 
		{
			if (a==0&&b>0)
			{
				cout<<2<<endl;
				continue;
			}
			if (a==0&&b<0)
			{
				cout<<1<<endl;
				continue;
			}
			if (b==0&&a>0)
			{
				cout<<1<<endl;
				continue;
			}
			if (b==0&&a<0)
			{
				cout<<2<<endl;
				continue;
			}
			if (a==b)
			{
				cout<<0<<endl;
				continue;
			}
			if (a<0&&b>0)
			{
				cout<<2<<endl;
				continue;
			}
			if (a>0&&b<0)
			{
				cout<<1<<endl;
				continue;
			}
			if (a>b)
			{
				cout<<1<<endl;
				continue;
			}
			else if (b>a)
			{
				cout<<2<<endl;
				continue;
			}
		}
	}
}