#include <bits/stdc++.h>
using namespace std;
long long int num_ones (long long int a)
{
	long long int total=0;
	while (a>0)
	{
		if (a%2==1)
			total++;
		a/=2;
	}
	return total;
}
int main()
{
	int n,k,m;
	cin>>n>>m>>k;
	long long int X[1002];
	int total_friends=0;
	for (int i=1;i<=(m+1);i++)
		cin>>X[i];
	for (int i=1;i<=m;i++)
	{
		long long int xor_result;
		xor_result=X[i]^X[m+1];
		if (num_ones(xor_result)<=k)
			total_friends++;
	}
	cout<<total_friends;
}