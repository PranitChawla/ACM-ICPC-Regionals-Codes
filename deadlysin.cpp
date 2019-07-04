#include <iostream>
using namespace std;
long long int chocolatesleft (long long int x,long long int y)
{
	
	// if (x<=0||y<=0||x==y)
	// 	return (x+y);
	// else 
	// {
	// 	if (x<y)
	// 		return chocolatesleft(x,y-x);
	// 	else 
	// 		return chocolatesleft(x-y,y);
	// }
	// while (1)
	// {
	// 	if (x<=0||y<=0||x==y)
	// 		break;
	// 	else 
	// 		{
	// 	if (x<y)
	// 		y=y-x;
	// 	else 
	// 		x=x-y;
	// 		}
	// }
	// return x+y;
	if (y==0)
		return x;
	else 
		return (chocolatesleft(y,x%y));

}
int main()
{
	long int T;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	long long int x,y;
	cin>>x>>y;
	cout<<2*chocolatesleft(x,y)<<endl;
	}
}