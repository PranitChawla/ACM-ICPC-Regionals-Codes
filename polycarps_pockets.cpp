#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long int
#define fi first
#define se second
#define vi vector<int> 
#define vli vector<ll>
#define pa pair<int,int>
#define vpa vector< pa >;
#define input(v,n) rep(i,0,n) cin>>v[i];
#define output(v,n) rep(i,0,n) pfi(v[i]); line
#define pfi(i) cout<<i<<" "
#define line cout<<"\n"
#define error(x) cout<<#x<<"="<<x<<" "
ll pom(ll n,ll p,ll c=mod){ if(!p)return 1;else if(p%2)return (pom(n,p-1,c)*(n%mod))%c;else{ll te=pom(n,p/2,c);return (te*te)%c;}}
int main(int argc, char const *argv[])
{
	int t=1;
	//cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		vli v;
		//input(v,n);
		v.pb(2);
		cout<<v[0];
	}
	return 0;
}
