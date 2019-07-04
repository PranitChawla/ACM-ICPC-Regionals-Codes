#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	double h,u,d,f;
	while (1)
	{
		cin>>h>>u>>d>>f;
		int flag;
		int count;
		if (h==0)
			break;
		else
		{
			count=0;
			double hc=0;
			double fatigue=(double)f/100*u;
			//cout<<fatigue;
			flag=0;
			while (1)
			{
				if (count!=0)
					u=u-fatigue;
				if (u<0)
				{
					hc=hc-d;
				}
				else
				{
					hc=hc+u;
					// cout<<hc<<endl;
					if (hc>h)
					{
						count++;
						flag=1;
						break;
					}
					hc=hc-d;
				}
				if (hc>h)
				{
					count++;
					flag=1;
					break;
				}
				else if (hc<0)
				{
					count++;
					break;
				}
				else 
					count++;
			}
		}
		if (flag)
			cout<<"success on day "<<count<<endl;
		else 
			cout<<"failure on day "<<count<<endl;
	}
}