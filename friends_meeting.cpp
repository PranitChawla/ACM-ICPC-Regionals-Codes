#include <bits/stdc++.h>
using namespace std;
bool is_prime (int n)
{
	if (n<=1)
		return false;
	for (int i=2;i<n;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n,t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin>>n;
		int a[n];
		for (int j=0;j<n;j++)
			cin>>a[j];
		vector <int> arr_min;
		for (int k=0;k<n;k++)
		{
			for (int m=k;m<n;m++)
			{
				long long int temp;
				temp=a[k]*a[m];
				arr_min.push_back(temp);
			}
		}
		vector <int> arr_min_prime;
		vector <int>::iterator it;
		for (it=arr_min.begin();it!=arr_min.end();it++)
		{
			if (is_prime(*it))
				arr_min_prime.push_back(*it);
		}

		if (arr_min_prime.size()==0)
			cout<<-1<<endl;
		else
		{
			long long int min;
			min=arr_min_prime[0];
			for (it=arr_min_prime.begin();it!=arr_min_prime.end();it++)
			{
				if (*it<min)
					min=*it;
			}
			cout<<min<<endl;
		}
	}
}