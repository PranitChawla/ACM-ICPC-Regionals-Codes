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
ll n,k,d;
v64 v;
ll dp[500005];
void solve (ll i)
{
	if (dp[i]!=-1)
		return;
	else
	{
		ll up=upper_bound(all(v),v[i]+d)-v.begin();
		//cout<<up<<endl;
		if (up>=n)
		{
			if (n-i>=k)
				dp[i]=1;
			return;
		}
		else if (i+k-1>=up)
		{
			dp[i]=0;
			return;
		}
		else
		{
		ll f=0;
		for (ll j=i+k;j<=up;j++)
		{
			solve(j);
			if (dp[j]==1)
				f=1;
		}
		if (f)
			dp[i]=1;
		else
			dp[i]=0;
		return;
		}
	}
}
int main()
{
	cin>>n>>k>>d;
	// fillv(dp,-1);
	ll a[n+1];
	ll sum[n+1];
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);	
	sum[0]=1;
	dp[0]=1;
	for (ll i=1;i<=n;i++)
	{
		ll index=lower_bound(a+1,a+n+1,a[i]-d)-a;
		ll fir=i-k;
		ll sec=index-1;
		//cout<<fir<<" "<<sec<<endl;
		if (fir<sec)
			dp[i]=0;
		else
		{
			if (sec>=1)
			{
			if (sum[fir]-sum[sec-1]>0)
				dp[i]=1;
			else
				dp[i]=0;
			}
			else if (sum[fir]>0)
				dp[i]=1;
			else
				dp[i]=0;
		}
		sum[i]=sum[i-1]+dp[i];
	}
	//cout<<dp[i]<<" ";
	// for (ll i=1;i<=n;i++)
	// 	cout<<dp[i]<<" ";
	(dp[n]==1)?cout<<"YES":cout<<"NO";
}