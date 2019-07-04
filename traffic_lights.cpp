#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	double l,d,v,g,r;
	cin>>l>>d>>v>>g>>r;
	double t1=(double)d/double(v);
	int a=g+r;
	int t=a;
	while (t1>=a)
	{
		a+=t;
	}
	int n=a/(g+r);
	cout<<n<<endl;
	//cout<<t1<<" "<<wait<<endl;
	double w;
	if (t1<n*g)
	{
		w=0;
	}
	else
	{
		w=n*((double)g+(double)r)-(double)t1;
	}
	double t2=(double)(l-d)/(double)v;
	printf("%0.9f",t1+t2+w);
}