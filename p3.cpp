#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 1000001
bool isPrime[1000001];
bool compare (ll a,ll b)
{
	return a>b;
}
ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
ll binarySearch(ll arr[], ll l, ll r, ll x) 
{ 
   if (r >= l) 
   { 
        ll mid = l + (r - l)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1; 
} 
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
	ll t;
	cin>>t;
	sieve();
	//vector <ll> primes;
	ll primes[80000];
	ll len=0;
	//freopen("output.txt", "w", stdout);
		for (ll i=1;i<=N;i++)
		{
			if (isPrime[i])
			{
				for (int j=2;j<=12/log10(i);j++)
				{
					if (isPrime[j+1])
					{
						//primes.push_back(power(i,j));
						primes[len++]=power(i,j);
					}
				}
			}
		}
		sort(primes,primes+len);
		//cout<<primes.size()<<endl;
		// for (ll i=0;i<primes.size();i++)
		// {
		// 	cout<<primes[i]<<", ";
		// }
	while (t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		for (ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,compare);
		ll c=0;
		for (ll i=0;i<n;i++)
		{
			if (binarySearch(primes,0,len-1,a[i])>=0)
			{
				cout<<i+1<<" ";
				c++;
			}
		}
		if (c==0)
			cout<<"No supporter found."<<endl;
		else
		cout<<endl;
	}
}