#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve (ll N)
{
	double D;
	D=sqrt(8*N+1);
	double root;
	root=(double)((D-1)/2);
	return ((int)root);
}
int main()
{
	ll N;
	cin>>N;
	ll A[N];
	for (ll i=0;i<N;i++)
		cin>>A[i];
	ll n;
	n=solve(N);
	cout<<n;
}