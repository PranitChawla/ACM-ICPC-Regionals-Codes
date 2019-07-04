#include <bits/stdc++.h>
using namespace std;
long long int gcd_cal (long long int P,long long int Q)
{
	if (Q==0)
		return P;
	else 
		return gcd_cal(Q,P%Q);
}
int main()
{
	long long int N;
	cin>>N;
	long long int A[N];
	for (long long int i=0;i<N;i++)
		cin>>A[i];
	long long int max=A[0];
	for (long long int i=1;i<N;i++)
	{
		if (A[i]>max)
			max=A[i];
	}
	long long int ans[max+1];
	long long int cnt[max+1];
	for (long long int i=1;i<=max;i++)
	{
		cnt[i]=0;
		ans[i]=0;
	}
	for (long long int i=0;i<N;i++)
		cnt[A[i]]++;
	for (long long i=1;i<=max;i++)
	{
		for (long long int j=i;j<=max;j+=i)
			ans[i]+=cnt[j];
	}
	long long int T;
	cin>>T;
	for (long long int i=0;i<T;i++)
	{
		long long int P,Q;
		cin>>P>>Q;
		long long int gcd;
		gcd=gcd_cal(P,Q);
		long long int lcm;
		lcm=P*Q/gcd;
		if (P>max&&Q>max)
			cout<<0<<endl;
		else if (P<=max&&Q>max)
			cout<<ans[P]<<endl;
		else if (P>max&&Q<=max)
			cout<<ans[Q]<<endl;
		else 
		{
		if (lcm>max)
			cout<<ans[P]+ans[Q]<<endl;
		else
			cout<<ans[P]+ans[Q]-ans[lcm]<<endl;
		}
	}


}