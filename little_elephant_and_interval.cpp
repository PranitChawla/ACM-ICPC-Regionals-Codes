#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
int main()
{
	ll l,r;
	cin>>l>>r;
	ll nl=floor(log10(l))+1;
	ll nr=floor(log10(r))+1;
	ll dp[20];
	dp[1]=9;
	for (ll i=2;i<=20;i++)
	{
		dp[i]=9*power(10,i-2);
		cout<<dp[i]<<" ";
	}
}