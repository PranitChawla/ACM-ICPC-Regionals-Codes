#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	double x,y;
}point;
double dis (point a,point b)
{
	return (sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)));
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	point A,B;
	cin>>A.x>>A.y>>B.x>>B.y;
	if (b==0)
	{
		point A1,B1;
		A1.x=-(double)c/a;
		A1.y=A.y;
		B1.x=-(double)c/a;
		B1.y=B.y;
		double mandis=abs(A.x-B.x)+abs(A.y-B.y);
		double AA1,BB1,A1B1;
		AA1=dis(A,A1);
		BB1=dis(B,B1);
		A1B1=dis(A1,B1);
		double ans=min(mandis,(AA1+BB1+A1B1));
		printf ("%.10lf",ans);
	}
	else if (a==0)
	{
		point A1,B1;
		A1.x=A.x;
		A1.y=-(double)c/b;
		B1.y=-(double)c/b;
		B1.x=B.x;
		double mandis=abs(A.x-B.x)+abs(A.y-B.y);
		double AA1,BB1,A1B1;
		AA1=dis(A,A1);
		BB1=dis(B,B1);
		A1B1=dis(A1,B1);
		double ans=min(mandis,(AA1+BB1+A1B1));
		printf ("%.10lf",ans);
	}
	else
	{
	point A1,A2,B1,B2;
	A1.x=A.x;
	A1.y=-((double)(a*A.x+c)/b);
	A2.x=-((double)(b*A.y+c)/a);
	A2.y=A.y;
	B1.x=B.x;
	B1.y=-((double)(a*B.x+c)/b);
	B2.x=-((double)(b*B.y+c)/a);
	B2.y=B.y;
	double mandis=abs(A.x-B.x)+abs(A.y-B.y);
	double AA1,AA2,BB1,BB2,A1B1,A1B2,A2B1,A2B2;
	AA1=dis(A,A1);
	AA2=dis(A,A2);
	BB1=dis(B,B1);
	BB2=dis(B,B2);
	A1B1=dis(A1,B1);
	A1B2=dis(A1,B2);
	A2B1=dis(A2,B1);
	A2B2=dis(A2,B2);
	double path1,path2,path3,path4;
	path1=AA1+A1B1+BB1;
	path2=AA1+A1B2+BB2;
	path3=AA2+A2B1+BB1;
	path4=AA2+A2B2+BB2;
	vector <double> paths;
	paths.push_back(path1);
	paths.push_back(path2);
	paths.push_back(path3);
	paths.push_back(path4);
	sort(paths.begin(),paths.end());
	double ans=min(paths[0],mandis);
	printf ("%.10lf",ans);
	}
}	