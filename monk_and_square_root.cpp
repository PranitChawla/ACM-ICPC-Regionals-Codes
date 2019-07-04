#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t)
	{
	long long int N,M;
	cin>>N>>M;
	if (N==0)
		cout<<0<<endl;
	else
	{
		int flag=0;
		long long int i;
		for (i=1;i<=M-1;i++)
		{
			if (i*i%M==N)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
			cout<<i<<endl;
		else
			cout<<-1<<endl;
	}
	t--;
	}
}