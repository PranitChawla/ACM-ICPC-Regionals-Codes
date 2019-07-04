#include <bits/stdc++.h>
using namespace std;
int main()
{
	while (1)
	{
		int n;
		cin>>n;
		if (n==-1)
			break;
		int a[n];
		int sum=0;
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if (sum%n==0)
		{
			int total_steps=0;
			for (int i=0;i<n;i++)
			{
				if (a[i]>sum/n)
					total_steps+=(a[i]-(sum/n));
			}
			cout<<total_steps<<endl;
		}
		else 
			cout<<-1<<endl;
	}
}