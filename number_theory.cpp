	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
	#define N 100001
	#define mod 1000000007
	#define mod1 1000000006
	bool isPrime[100001];
	typedef struct 
	{
		ll number;
		ll power;
	}point;
	ll power(ll x, ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
	ll modular_exp (ll x,ll n,ll M)
	{
		if (n==0)
			return 1;
		else if (n%2==0)
			return (modular_exp((x*x)%M,n/2,M))%M;
		else 
			return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
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
	vector <point> prime_factorize (ll A)
	{
		vector <point> fact_a;
		for (ll i=2;i*i<=A;i++)
		{
			ll key=0;
			while (A%i==0)
			{
				A/=i;
				key++;
			}
			if (key)
			{
				point p;
				p.number=i;
				p.power=key;
				fact_a.push_back(p);
			}
		}
		if (A!=1)
			{
				point p;
				p.number=A;
				p.power=1;
				fact_a.push_back(p);
			}
		return fact_a;
	}
	int main()
	{
		int t;
		cin>>t;
		memset(isPrime,0,sizeof(isPrime));
		ios_base::sync_with_stdio(false); 
    	cin.tie(NULL);    
		//sieve();
		while (t--)
		{
			ll n;
			cin>>n;
			ll a[n];
			vector <point> arr[n];
			ll ans=1;
			vector <ll> list[100001];
			for (ll i=0;i<n;i++)
			{
				cin>>a[i];
				arr[i]=prime_factorize(a[i]);
				for (ll j=0;j<arr[i].size();j++)
				{
					list[arr[i][j].number].push_back(arr[i][j].power);
				}
				//cout<<arr[i].size()<<endl;
			}

			for (ll i=2;i<=100000;i++)
			{
				if (list[i].size()>0&&list[i].size()<n)
				{
					// for (ll j=0;j<list[i].size();j++)
					// 	cout<<list[i][j]<<" ";
					// cout<<endl;
					ll k=list[i].size();
					for (ll j=0;j<n-k;j++)
						list[i].push_back(0);
					// for (ll j=0;j<list[i].size();j++)
					// 	cout<<list[i][j]<<" ";
					// cout<<endl;
				}
				sort(list[i].begin(),list[i].end());
			}
			for (ll i=2;i<=100000;i++)
			{
				if (list[i].size()>0)
				{
					//cout<<list[i].size()<<endl;
					ll sum=0;
					ll ct=0;
					for (ll j=0;j<list[i].size();j++)
						{
							sum=(sum+(list[i][j]*(modular_exp(2,n-j-1,mod1))%mod1))%mod1;
						}
						ans=(ans*modular_exp(i,sum,mod))%mod;
					// for (ll j=0;j<list[i].size();j++)
					// 	cout<<list[i][j]<<" ";
					// cout<<endl;
				}
			}
			cout<<ans<<endl;
		}
	}