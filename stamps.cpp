#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int scenarios;
	cin>>scenarios;
	for (int i=0;i<scenarios;i++)
	{
		long long int stamps;
		long long int friends;
		cin>>stamps>>friends;
		long long int a[friends+1];
		for (int j=0;j<friends;j++)
			cin>>a[j];
		sort(a,a+friends);
		long long int counter=friends-1;
		long long int sum=0;
		long long int count=0;
		int flag=0;
		while (sum<stamps)
		{
			sum=sum+a[counter];
			if (counter==0&&sum<stamps)
			{
				flag=1;
				break;
			}
			count++;
			counter--;
		}
		cout<<"Scenario #"<<i+1<<":"<<endl;
		if (flag==1)
			cout<<"impossible"<<endl;
		else
			cout<<count<<endl;
		cout<<endl;
	}
}