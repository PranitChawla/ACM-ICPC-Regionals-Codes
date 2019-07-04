#include <iostream>
using namespace std;
int no_of_jumps (int n)
{
	
	if (n==1)
		return 1;
	else if (n==2)
		return 2;
	else if (n==0)
		return 1;
	else
		return (no_of_jumps(n-1)+no_of_jumps(n-2)+no_of_jumps(n-3));

}
int no_of_jumps_iter (int n)
{
	for (int i=0;i<n;i++)
	{
		
	}
}
int main()
{
	int n;
	cin>>n;
	int result=no_of_jumps(n);
	cout<<result;
}