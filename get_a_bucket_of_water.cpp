#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 
double val (double dh,double dl,double dr,double k,double x)
{
	double x4=x*x*x*x;
	double x3=x*x*x;
	double x2=x*x;
	return ((double)x4*(k*k-1)+x3*(2*dr-2*dr*k*k)+x2*(k*k*(dr*dr+dh*dh)-(dr*dr+dl*dl))-2*dr*dh*dh*k*k*x+k*k*dh*dh*dr*dr);
}
double root (double beg, double end,double dh,double dl,double dr,double k)
{
	double mid=((double)beg+end)/2;
	double b,m,e;
	b=val(dh,dl,dr,k,beg);
	m=val(dh,dl,dr,k,mid);
	e=val(dh,dl,dr,k,end);
	// cout<<m<<endl;
	if (abs(m)<=0.001)
		return mid;
	else if (b*m<0)
		return (root(beg,mid,dh,dl,dr,k));
	else
		return (root(mid,end,dh,dl,dr,k));
}
int main()
{
	while (1)
	{
		double dh,dl,dr,k;
		cin>>dh>>dl>>dr>>k;
		if (dh==0&&dl==0&&dr==0&&k==0)
			break;
		else
		{
			double ans=root(0,dr,dh,dl,dr,k);
			double ans2=sqrt(dh*dh+ans*ans)+sqrt((dr-ans)*(dr-ans)+dl*dl);
			printf("%0.10lf",ans2);
			cout<<endl;
		}
	}
}