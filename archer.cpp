#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<(double)(double(a*d)/(b*c+a*d-a*c));
}