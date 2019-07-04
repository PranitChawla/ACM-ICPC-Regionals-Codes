#include <bits/stdc++.h>
using namespace std;
long int num_rec (int n)
{
	long int count=0;
	for (int i=1;i<=sqrt(n);i++)
	{
		if (n%i==0)
			count++;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	long int total=0;
	for (int i=1;i<=n;i++)
	{
		total+=num_rec(i);
	}
	cout<<total;
}