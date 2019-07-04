#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for (long long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		long long int sum=0;
		for (long long int j=0;j<n;j++)
		{
			cin>>arr[j];
			sum+=((arr[j])%n);
		}
		if (sum%n==0)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
}