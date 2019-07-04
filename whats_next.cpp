#include <bits/stdc++.h>
using namespace std;
int main()
{
	while (1)
	{
		int a1,a2,a3;
		cin>>a1>>a2>>a3;
		if (a1==0&&a2==0&&a3==0)
			break;
		else if ((a3-a2)==(a2-a1))
		{
			int next;
			next=a3+a3-a2;
			cout<<"AP "<<next<<endl;
		}
		else
		{
			long int next;
			next=a3*a3/a2;
			cout<<"GP "<<next<<endl;
		}
	}
}