#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	double x,y;
}point;
typedef struct 
{
	double a,b,c;
}line;
line find_abc (point p1,point p2)
{
	line l1;
	l1.a=p2.y-p1.y;
	l1.b=p1.x-p2.x;
	l1.c=a*p1.x+b*y1;
	return l1;
}
point intersection (line l1,line l2)
{
	point p;
	double det =l1.a*l2.b-l1.b*l2.a;
	if(det == 0)
	{
		p.x=INT_MAX;
		p.y=INT_MAX;
	}
	else
	{
	 p.x = (l2.b*l1.c - l1.b*l2.c)/det;
	 p.y = (l1.a*l2.c - l2.a*l1.c)/det;
	}
	return p;
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll a,b,x1,y1;
		cin>>a>>b>>x1>>y1;
		bool c1=0;
		bool c2=0;
		bool c3=0;
		bool c4=0;
		point p1,p2,p3,p4;
		point a1,a2,a3,a4;
		line l1,l2;
		p1.x=x1;
		p1.y=a;
		p2.x=x1+b;
		p2.y=y1+b;
		l1=find_abc(p1,p2);
		p3.x=x1;
		p3.y=0;
		p4.x=x1+b;
		p4.y=y1;
		l2=find_abc(p3,p4);
		a1=intersection(l1,l2);
		p1.x=x1+b;
		p1.y=a;
		p2.x=x1;
		p2.y=y1+b;
		l1=find_abc(p1,p2);
		p3.x=x1+b;
		p3.y=0;
		p4.x=x1;
		p4.y=y1;
		l2=find_abc(p3,p4);
		a2=intersection(l1,l2);
		p1.x=0;
		p1.y=y1+b;
		p2.x=x1;
		p2.y=y1;
		l1=find_abc(p1,p2);
		p3.x=a;
		p3.y=y1;
		p4.x=x1+b;
		p4.y=y1;
		l2=find_abc(p3,p4);
		a3=intersection(l1,l2);
		p1.x=0;
		p1.y=y1;
		p2.x=x1;
		p2.y=y1+b;
		l1=find_abc(p1,p2);
		p3.x=a;
		p3.y=y1;
		p4.x=x1+b;
		p4.y=y1+b;
		l2=find_abc(p3,p4);
		a4=intersection(l1,l2);



	}
}