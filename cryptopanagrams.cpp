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
int main()
{
	ll t;
	cin>>t;
	for (ll j=1;j<=t;j++)
	{
		ll n;
		cin>>n;
		ll l;
		cin>>l;
		v64 v;
		for (ll i=0;i<l;i++)
		{
			ll a;
			cin>>a;
			v.pb(a);
		}
		set <ll> s;
		for (ll i=0;i<v.size()-1;i++)
		{
			ll g=__gcd(v[i],v[i+1]);
			ll a=v[i]/g;
			ll b=v[i+1]/g;
			s.insert(a);
			s.insert(b);
			s.insert(g);
		}
		map <ll,char> m;
		ll c='A';
		for (auto x:s)
		{
			m[x]=c;
			c++;
		}
		string ans;
		for (ll i=0;i<v.size();i++)
		{
			if (i==v.size()-1)
			{
				ll g=__gcd(v[i],v[i-1]);
				ans.pb(m[v[i]/g]);	
			}
			else
			{
			ll g=__gcd(v[i],v[i+1]);
			ll a=v[i]/g;
			//ll b=v[i+1]/g;
			ans.pb(m[a]);
			ans.pb(m[g]);
			}
		}
		for (ll i=1;i<ans.length()-1;i++)
		{
			if (i%2)
			{
				if (ans[i]==ans[i+1])
				ans[i+1]='*';
			}
		}
		string a2;
		for (ll i=0;i<ans.length();i++)
		{
			if (ans[i]!='*')
				a2.pb(ans[i]);
		}
		cout<<"Case #"<<j<<": "<<a2<<endl;
	}
}