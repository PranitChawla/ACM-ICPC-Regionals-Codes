#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	double x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	double dis;
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if (dis<=r1+r2&&dis>=abs(r1-r2))
	{
		cout<<0<<endl;
	}
	else if (dis>r1+r2)
	{
	 double ans;
	 ans=(double)r1+r2-dis;
	 ans/=2.0;
	 ans*=-1;
	 printf("%0.9f",ans);
	}
	else
	{
		double ans;
		ans=max(r1,r2)-min(r1,r2)-dis;
		ans/=2;
		printf("%0.9f",ans);
	}
}