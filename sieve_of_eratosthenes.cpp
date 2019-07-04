#include <bits/stdc++.h>
using namespace std;
void list_primes (bool is_prime[],int N)
{
	for (int i=2;i*i<=N;i++)
	{
		if (is_prime[i])
		{
			for (int j=i*i;j<=N;j=j+i)
				is_prime[j]=0;
		}
	}
}
int main()
{
	int N;
	cin>>N;
	bool is_prime [N+1];
	for (int i=2;i<=N;i++)
		is_prime[i]=1;
	is_prime[1]=0;
	list_primes(is_prime,N);
	for (int i=2;i<=N;i++)
	{
		if (is_prime[i])
			cout<<i<<" ";
	}
}