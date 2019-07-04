#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
ll findlcm(ll arr[], ll n) 
{ 
    // Initialize result 
    ll ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (ll i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
int main()
{
	string s;
ll vis[100];
vector <ll> v[100];
ll p[100];
	cin>>s;
	for (ll i=0;i<s.length();i++)
	{
		ll a=i+1;
		ll b=s[i]-'A'+1;
		v[a].push_back(b);
		p[b]=a;
	}
	ll cyc[100];
	memset(cyc,0,sizeof(cyc));
	memset(vis,0,sizeof(vis));
	for (ll i=1;i<=26;i++)
	{
		vis[i]=1;
		ll c=0;
		stack <ll> q;
		q.push(i);
		ll root=i;
		int f=0;
		while (!q.empty())
		{
			ll temp=q.top();
			q.pop();
			for (ll j=0;j<v[temp].size();j++)
			{
				if (vis[v[temp][j]])
				{
		
					c++;
					f=1;
					break;
				}
				c++;
				vis[v[temp][j]]=1;
				q.push(v[temp][j]);
			}
			if (f)
				break;
		}
		if (c==0)
			cyc[i]=1;
		else
			cyc[i]=c;
		memset(vis,0,sizeof(vis));
	}
	ll n;
	cin>>n;
	string s2;
	cin>>s2;
	ll ar[n];
	for (ll i=0;i<s2.length();i++)
	{
		ll b=s2[i]-'A'+1;
		ar[i]=cyc[b];
	}
	ll ans;
	ans=findlcm(ar,n);
	cout<<ans;
}