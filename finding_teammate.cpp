#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fact[100005];
ll modular_exp (ll x,ll n,ll M)
    {
        if (n==0)
            return 1;
        else if (n%2==0)
            return (modular_exp((x*x)%M,n/2,M))%M;
        else 
            return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
    }
void factorial (ll mod)
{

ll i,j;
fact[0]=1;
fact[1]=1;
for(i=2;i<100005;i++)
{
   fact[i]=((i*(i-1)/2)%mod*fact[i-2]%mod)%mod;
   //if (i<100)
  // cout<<fact[i]<<" ";
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
ll mod =1000000007;
for (ll i=0;i<100005;i++)
fact[i]=1;
cin>>t;
factorial(mod);
while(t--)
{
    ll n,i,j,k;
    cin>>n;
    map <ll,ll> m;
    map <ll,ll> :: iterator it;

    for(i=1;i<=n;i++){
        ll temp;
        cin>>temp;
        it=m.find(temp);
        if(it!=m.end()){
            (it->second)++;
        }
        else
           {

               m.insert(make_pair(temp,1));

           }

    }
    ll ans=1;
    ll c=0;
    for(it=m.begin();it!=m.end();it++){
        ll q=it->second;
        ll t=q/2;
        if (q%2)
            c++;
        if (q%2==0&&c%2)
        {
        ll num=fact[q]/fact[t];
        ans=(ans*num%mod)%mod;
        ans=(ans*2)%mod;
        }
        else if (q%2==0&&c%2==0)
        {
        ll num=fact[q]/fact[t];
        ans=(ans*num%mod)%mod;
        }
        else
        {
        ll num=fact[q-1]/fact[t];
        ans=(ans*q%mod)%mod;
        ans=(ans*num%mod)%mod;
        }
    }
 cout<<ans<<endl;
}

}
