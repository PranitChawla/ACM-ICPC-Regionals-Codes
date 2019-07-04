#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
	long int x,y;
}point;
double dist (point temp)
{
	// cout<<temp.x<<" "<<temp.y;
	// cout<<endl;
	double distance;
	distance=sqrt(temp.x*temp.x+temp.y*temp.y);
	//cout<<distance<<" ";
	return distance;
}
bool solve_backtrack(point p,point v[],long int n,int key,int a[])
{
	if (key>n)
	{
		if (dist(p)<=1500000)
			return true;
		else 
			return false;
	}
	else 
	{
	p.x=p.x+v[key].x;
	p.y=p.y+v[key].y;
	if (solve_backtrack(p,v,n,key+1,a))
	{
		a[key]=1;
		return true;
	}
	else
	{
		p.x=p.x-v[key].x;
		p.y=p.y-v[key].y;
		a[key]=-1;
		//return false;
	}
	}
}
int main()
{
	long int n;
	cin>>n;
	point v[n+1];
	int a[n+1];
	point p;
	p.x=0;
	p.y=0;
	for (int i=1;i<=n;i++)
		cin>>v[i].x>>v[i].y;
	bool result;
	result=solve_backtrack(p,v,n,1,a);
	//cout<<result;
	for (int i=1;i<=n;i++)
	{
		if (i!=n)
		cout<<a[i]<<" ";
		else
		cout<<a[i];
	}
}