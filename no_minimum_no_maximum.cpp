#include <bits/stdc++.h>
using namespace std;
long long int modularexp(long long int x,long long int n,long long int M)
{
	// if (n==0)
	// 	return 1;
	// else if (n%2==0)
	// 	return ((modularexp((x*x)%M,n/2,M)));
	// else
	// 	return (x*modularexp((x*x)%M,(n-1)/2,M))%M;
	long long int result=1;
	while (n>0)
	{
		if (n%2==1)
			result=(result*x)%M;
		x=(x*x)%M;
		n=n/2;
	}
	return result;
}
long long int fact (int n)
{
	int facto=1;
	for (int i=1;i<=n;i++)
		facto*=i;
	return facto;
}
long long int ncr (int n,int r)
{
	return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
	int t;
	cin>>t;
	while (t)
	{
	int N,K;
	cin>>N>>K;
	int A[N+1];
	for (int i=1;i<=N;i++)
		cin>>A[i];
	sort (A+1,A+N+1);
	int size=K-2;
	long long int power[N+1];
	for (int i=2;i<=N-1;i++)
	{
		int left=i-1;
		int right=N-i;
		long long int sum=0;
		if (i<=K-1)
		{
		int l=i-1;
		int r=K-i;
		while (left>=l&&right>=r&&l>0)
		{
			sum+=ncr(left,l)*ncr(right,r);  
			l--;
			r++;
		}
	}
	else
	{
		int l=K-2;
		int r=1;
		while (left>=l&&right>=r&&l>0)
		{
			sum+=ncr(left,l)*ncr(right,r);
			l--;
			r++;
		}

	}	
		power[i]=sum;
	}
	// for (int i=2;i<=N-1;i++)
	// 	cout<<power[i]<<" ";
	// cout<<endl;
	long long int M = pow(10,9)+7;
	long long int product=1;
	for (int i=2;i<=N-1;i++)
	{
		long long int rem;
		rem=power[i]%(M-1);
		// cout<<rem<<" ";
		long long int temp;
		// temp=pow(temp,rem);
		temp=modularexp(A[i],rem,M);
	//	temp=temp%M;
		//cout<<temp<<" ";
		//temp=modularexp(A[i],rem,M);
		product=product*temp;
		product=product%M;
		//cout<<product<<" ";
	}
	//cout<<modularexp(8,28,M);
	//cout<<endl;
	cout<<product%M<<endl;
	t--;
}

}