#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime [1000002];
void sieve() 
	{
	        for(ll i = 0; i <= 1000001;++i) {
	            isPrime[i] = true;
	        }
	        isPrime[0] = false;
	        isPrime[1] = false;
	        for(ll i = 2; i * i <= 1000001; ++i) {
	             if(isPrime[i] == true) {                    
	                 for(ll j = i * i; j <= 1000001 ;j += i)
	                     isPrime[j] = false;
	            }
	        }
	}
	bool isPowerOfTwo (ll x) 
{ 
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1))); 
} 
int main()
{
	ll q;
	cin>>q;
	sieve();
	for (ll i=0;i<q;i++)
	{
		ll n;
		cin>>n;
		ll j;
		ll nob=log2(n)+1;
		if (isPowerOfTwo(n+1))
		{
			ll f=0;
			for (j=2;j<=sqrt(n);j++)
			{
				if (isPrime[j])
				{
					if (n%j==0)
					{
						f=1;
						break;
					}
				}
			}
			if (f)
				cout<<n/j<<endl;
			else
				cout<<1<<endl;
		}
		else
			cout<<((1<<nob)-1)<<endl;

	}
}