#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll MAXN=500001;
ll spf[500001];
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
 
        spf[i] = i; 
  
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) 
    {  
        if (spf[i] == i) 
        { 

            for (ll j=i*i; j<MAXN; j+=i) 
  
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 
  
ll getFactorization(ll x) 
{ 
    vector <ll> ret; 
    while (x != 1) 
    { 
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret.size(); 
} 
int main()
{
	sieve();
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll sum=0;
		for (ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=getFactorization(a[i]);
		}
		if (sum%2==1)
			cout<<"Alice"<<endl;
		else
			cout<<"Bob"<<endl;
	}
}