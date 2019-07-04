#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	cout<<(ll)(ceil((double)(2*n)/k)+ceil((double)(5*n)/k)+ceil((double)(8*n)/k));
}