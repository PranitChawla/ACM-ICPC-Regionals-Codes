#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll countSetBits(ll n) 
{ 
  ll count = 0; 
  while (n) 
  { 
    count += n & 1; 
    n >>= 1; 
  } 
  return count; 
} 
int main()
{
	vector <ll> arr[17];
	for (ll i=0;i<=100000;i++)
	{
		ll j;
		j=countSetBits(i);
		arr[j].push_back(i);
	}
	// for (ll i=0;i<17;i++)
	// 	cout<<arr[i].size()<<" ";
	int t;
	cin>>t;
	while (t--)
	{
		ll a,b,c;
		//cout<<"cehck";
		cin>>a>>b>>c;
		ll k,l;
		k=countSetBits(a);
		l=countSetBits(b);
		//cout<<arr[k].size()<<endl;
		ll ans=0;
		for (ll i=0;i<arr[k].size();i++)
		{
			//cout<<arr[k][i]<<endl;
			//cout<<countSetBits(c-arr[k][i]);
			if (c-arr[k][i]>=0)
			{
			if (countSetBits(c-arr[k][i])==l)
				ans++;
			}
			//cout<"dsa";
		}
		cout<<ans<<endl;
	}
}