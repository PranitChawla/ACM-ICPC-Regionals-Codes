#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
typedef struct 
{
	long long int x,y,z;
}point;
double calc_time (point P,point Q,point d,point Ce,long long int radius)
{
	double a,b,c,p,q,r,l,m,n;
	a=Ce.x-P.x;
	b=Ce.y-P.y;
	c=Ce.z-P.z;
	p=Ce.x-Q.x;
	q=Ce.y-Q.y;
	r=Ce.z-Q.z;
	l=P.x-Q.x;
	m=P.y-Q.y;
	n=P.z-Q.z;
	double A,B,C;
	A=(b*b+c*c)*(d.x*d.x)+(a*a+c*c)*(d.y*d.y)+(b*b+a*a)*(d.z*d.z)-2*b*c*d.y*d.z-2*a*c*d.x*d.z-2*a*b*d.x*d.y-(radius*radius)*(d.x*d.x)-(radius*radius)*(d.y*d.y)-(radius*radius)*(d.z*d.z);
	C=(b*b+c*c)*(p*p)+(a*a+c*c)*(q*q)+(a*a+b*b)*(r*r)-2*b*c*q*r-2*a*c*p*r-2*a*b*q*p-(radius*radius)*(l*l)-(radius*radius)*(m*m)-(radius*radius)*(n*n);
	B=2*(b*c*r*d.y+b*c*q*d.z+a*c*r*d.x+a*c*p*d.z+a*b*q*d.x+a*b*p*d.y-p*(b*b+c*c)*d.x-q*(a*a+c*c)*d.y-r*d.z*(a*a+b*b)+l*d.x*(radius*radius)+m*d.y*(radius*radius)+n*d.z*(radius*radius));
	double t1,t2;
	double D;		
	D=sqrt(B*B-4*A*C);
	if (A!=0)
	{
	if (D>0)
	{
		t1=(-B+D)/(2*A);
		t2=(-B-D)/(2*A);
	}
	// if (t1<0&&t2>0)
	// 	return t2;
	// else if (t2<0&&t1>0)
	// 	return t1;
	// else if (t1<t2&&t1>0&&t2>0)
	// 	return t1;
	// else 
	// 	return t2;
	if (t1>0)
		return t1;
	else if (t2>0)
		return t2;
	}
	else 
	{
		return -1*(C/B);
	}
}
int main()
{
	long int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	point P,Q,d,c,Qnew;
	long long int r;
	cin>>P.x>>P.y>>P.z>>Q.x>>Q.y>>Q.z>>d.x>>d.y>>d.z>>c.x>>c.y>>c.z>>r;
	double t_final;
	t_final=calc_time(P,Q,d,c,r);
	printf("%.9f",t_final);
	cout<<endl;
}
}