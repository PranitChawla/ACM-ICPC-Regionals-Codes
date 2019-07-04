#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare (ll a,ll b)
{
	return a>b;
}
#define N 611951
bool isPrime[N+1];
void sieve() 
	{
	        for(ll i = 0; i <= N;++i) {
	            isPrime[i] = true;
	        }
	        isPrime[0] = false;
	        isPrime[1] = false;
	        for(ll i = 2; i * i <= N; ++i) {
	             if(isPrime[i] == true) {                    
	                 for(ll j = i * i; j <= N ;j += i)
	                     isPrime[j] = false;
	            }
	        }
	}
int main()
{
	sieve();
	vector <ll> v;
	//ll c=1;
	for (ll i=2;i<=N;i++)
	{
		if (isPrime[i])
		{
			v.push_back(i);

		}
	}	
	sort(v.begin(),v.end(),compare);
	ll t;
	cin>>t;
	while (t--)
	{
		ll n,k;
		k=0;
		cin>>n;
		vector <ll> vi;
		ll c1=0;
		ll c2=0;
		for (ll i=0;i<n;i++)
		{
			if (c2%2==0)
			{
			if (c1%2==0)
			{
				vi.push_back(2*v[k]);
				c1=1;
			}
			else
			{
				vi.push_back(3*v[k]);
				c1=0;
			}
			}
			else
			{
				if (c1%2==0)
			{
				vi.push_back(3*v[k]);
				c1=1;
			}
			else
			{
				vi.push_back(2*v[k]);
				c1=0;
			}
			}
			if (i%2==1)
			{
				c2++;
				k++;
			}
		}
		if (n%2==0)
		{
		vi[0]*=5;
		vi[n-1]*=5;
		}
		else
		{
			if (__gcd(vi[n-1],vi[0])!=1)
			{
				vi[n-2]/=2;
				vi[n-2]*=5;
				vi[n-1]=10;
			}
			else
			{
				vi[0]*=5;
				vi[n-1]*=5;	
			}

		}
		for (ll i=0;i<vi.size();i++)
			cout<<vi[i]<<" ";
		cout<<endl;
	}
	// cout<<__gcd(9749715,1949973);
}