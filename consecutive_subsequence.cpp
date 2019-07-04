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
typedef vector<p64> vp64;
typedef vector<vp32> vvp32;
typedef map<int,int> m32;
const int LIM = 1e5+5, MOD = 1e9+7;
const ll N=1000;
bool compare (p64 a,p64 b)
{
	if (a.fi!=b.fi)
		return a.fi<b.fi;
	else
		return a.se<b.se;
}
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	map <ll,ll> m;

	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (m.find(a[i])==m.end())
			m.insert(mp(a[i],0));
		//v.pb(mp(a,i+1));
	}
	map <ll,ll>::iterator it,it1;
	for (ll i=1;i<=n;i++)
		{
			it=m.find(a[i]-1);
			it1=m.find(a[i]);
			if (it!=m.end())
			{
				it1->second=it->second+1;
			}
			else
			{
				if (it1->second==0)
					it1->second=1;
			}
		}
	// for (it=m.begin();it!=m.end();it++)
	// 	cout<<it->first<<" "<<it->second<<endl;
		ll ma=INT_MIN;
		ll ma_ind;
	for (ll i=1;i<=n;i++)
	{
		it=m.find(a[i]);
		if (it!=m.end())
		{
			if (it->second>ma)
			{
				ma=it->second;
				ma_ind=i;
			}
		}
	}
	ll c=ma;
	ll ele=a[ma_ind];
	cout<<ma<<endl;
	stack <ll> s;
	//s.push(ma_ind);
	for (ll i=n;i>=1;i--)
	{
		if (c>0)
		{
			if (a[i]==ele)
			{
				s.push(i);
				ele--;
				c--;
			}
		}
	}
	while (!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}