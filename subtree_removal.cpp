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
v64 v[100004];
ll sum[100004];
ll dp[100004];
ll a[100004];
ll x;
void solve (ll i, ll j)
{
	if (v[i].size()==1&&i!=1)
	{
		//cout<<i<<endl;
		sum[i]=a[i];
		ll t=0;
		dp[i]=min(t,sum[i]+x);
		return;
	}
	else
	{
		ll s=0;
		ll su=0;
		for (ll k=0;k<v[i].size();k++)
		{
			//cout<<v[i][k]<<endl;
			if (v[i][k]!=j)
			{
				solve(v[i][k],i);
				su+=sum[v[i][k]];
				s+=dp[v[i][k]];
			}
		}
		sum[i]=su+a[i];
		dp[i]=min(sum[i]+x,s);
		//cout<<sum[i]<<endl;
	}
}
int main()
{
	fast;
	ll t;
	cin>>t;
	while (t--)
	{
		memset(sum,-1,sizeof(sum));
		memset(dp,-1,sizeof(dp));
		ll n;
		cin>>n>>x;
		ll tot=0;
		for (ll i=1;i<=n;i++)
		{
			cin>>a[i];
			tot+=a[i];
		}
		for (ll i=0;i<n-1;i++)
		{
			ll c,d;
			cin>>c>>d;
			v[c].pb(d);
			v[d].pb(c);
		}
		solve(1,-1); 
		cout<<tot-dp[1]<<endl;
		for(ll i=1;i<=n;i++)
		{
			v[i].resize(0);
		}
	}
}