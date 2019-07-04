#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int quotient=n/m;
	long long int remainder=n%m;
	long long int kmin;
	long long int kmax;
	long long int n_max;
	n_max=n-m;
	kmax=(n-m+1)*(n-m)/2;
	kmin=(remainder)*((((n/m+1)*(n/m)))/2)+(m-remainder)*(((n/m)*(n/m-1))/2);
	cout<<kmin<<" "<<kmax;
}