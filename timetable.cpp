#include <bits/stdc++.h>
using namespace  std;
typedef long long int ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define mp make_pair
#define sz(a) a.size()
#define fi first
#define se second
#define rsz(a,n) a.resize(n)
#define test(t) ll t;cin>>t;while(t--)
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define fillv(a,k) memset(a,k,sizeof(a))
#define filla(a,k,n) memset(a,k,sizeof(a[0])*n)
#define leadzero(a) __builtin_clz(a) //count leading zeros
#define trailzero(a) __builtin_ctz(a) //count trailing zeros
#define bitcount(a) __builtin_popcount(a) // count set bits (add ll)
#define ln cout<<"\n"
#define sp cout<<" "
#define spaceprint(a,i,s,n) {forsn(i,s,n) { cout<<a[i]; sp;}}
#define lineprint(a,i,s,n) {forsn(i,s,n) {cout<<a[i]; ln;}}
#define maxe(a) *max_element(a.begin(),a.end())
#define maxi(a) max_element(a.begin(),a.end())-a.begin()
#define mine(a) *min_element(a.begin(),a.end())
#define mini(a) min_element(a.begin(),a.end())-a.begin()
#define all(c) c.begin(),c.end()
#define trav(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element)  (find(all(container),element) != container.end())// check the presence of element
//copy(from_begin, from_end, to_begin); copy function
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<ll,ll> p64;
typedef pair<int,int> p32;
typedef pair<int,p32> p96;
typedef vector<ll> v64;
typedef vector<string> vs;
typedef vector<int> v32;
typedef vector<v32> vv32;
typedef vector<v64> vv64;
typedef vector<p32> vp32;
typedef vector<vp32> vvp32;
typedef map<int,int> m32;
const int LIM = 1e5+5, MOD = 1e9+7;
const ll N=1000;
ll min_hours[502][502];
ll dp[502][502];
string v[502];
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll l[502];
	ll r[502];
	for (ll i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for (ll w=1;w<=n;w++)
	{
		string s;
		s=v[w-1];
		ll i,j;
		memset(l,0,sizeof(l));
		memset(r,0,sizeof(r));
		ll ones=0;
		for (ll i=0;i<s.length();i++)
		{
			if (s[i]=='1')
				ones++;
		}
		if (ones==0)
		{
			for (ll z=0;z<=k;z++)
				min_hours[w][z]=0;
			continue;
		}
		for (i=0;i<s.length();i++)
		{
			if (s[i]=='1')
				break;
		}
		for (j=s.length()-1;j>=0;j--)
		{
			if (s[j]=='1')
				break;
		}
		l[0]=i;
		r[0]=j;
		min_hours[w][0]=r[0]-l[0]+1;
		ll t=1;
		for (ll z=i+1;z<s.length();z++)
		{
			if (s[z]=='1')
			{
				l[t]=z;
				t++;
			}
		}
		t=1;
		for (ll z=j-1;z>=0;z--)
		{
			if (s[z]=='1')
			{
				r[t]=z;
				t++;
			}
		}
		for (ll h=1;h<=k;h++)
		{
			if (h>=ones)
				min_hours[w][h]=0;
			else
			{
				ll mi=INT_MAX;
				for (ll z=0;z<=h;z++)
				{
					mi=min(mi,r[h-z]-l[z]+1);
				}
				min_hours[w][h]=mi;
			}
		}
	}
	for (ll i=0;i<=k;i++)
		dp[1][i]=min_hours[1][i];
	for (ll i=2;i<=n;i++)
	{
		for (ll j=0;j<=k;j++)
		{
			ll mi=INT_MAX;
			for (ll z=0;z<=j;z++)
			{
				mi=min(mi,dp[i-1][j-z]+min_hours[i][z]);
			}
			dp[i][j]=mi;
		}
	}
	// for (ll i=1;i<=n;i++)
	// {
	// 	for (ll j=0;j<=k;j++)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	cout<<dp[n][k];

}