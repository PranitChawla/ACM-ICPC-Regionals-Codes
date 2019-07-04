#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	int max=0;
	int i_max,j_max;
	for (int i=0;i<=4;i++)
	{
		for (int j=0;j<=2;j++)
		{
			int val;
			val=i*a+j*b;
			if (val<=n)
			{
				if (val>max)
				{
					max=val;
					i_max=i;
					j_max=j;
				}
			}
		}
	}
	if (i_max==0&&j_max==1||i_max==1&&j_max==0)
	{
		cout<<6<<endl;
	}
	else
	{
		if (i_max!=0&&j_max!=0)
		{
			if (i_max==3)
				i_max=2;
			cout<<max(4/i_max,2/j_max);
		}
		else if (j_max==0)
		{
			int door=0;
			door=4/i_max;
			if (n>=2*b)
				door++;
			else
				door=door+2;
			cout<<door<<endl;
		}
		else if (i_max==0)
		{
			int door;
			door=2/j_max;
			int max=a;
			int i_max=1;
			for (int i=1;i<=4;i++)
			{
				int val;
				if (val<=n)
				{
					if (val>max)
					{
						max=val;
						i_max=i;
					}
				}

			}
			if (i_max==3)
				i_max=2;
			door=door+4/i_max;
			cout<<door<<endl;
		}
	}

}