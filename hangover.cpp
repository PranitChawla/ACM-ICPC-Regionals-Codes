#include <bits/stdc++.h>
using namespace std;
double calc_sum (long long int n)
{
	double sum=0;
	for (long long int i=2;i<=n+1;i++)
		sum+=(double)1/(i);
	return sum;
}
long long int calc_min (double c)
{
	long long int n=1;
	while (1)
	{
		if (calc_sum(n)>=c)
			break;
		n++;
	}
	return n;
}
int main()
{
	while (1)
	{
		double c;
		cin>>c;
		if (c==0)
			break;
		else 
			cout<<calc_min(c)<<" "<<"card(s)"<<endl;
	}
}