#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
 
/* This function calculates (a^b)%MOD */
ll pow(ll a, ll b,ll MOD)
{
ll x=1,y=a;
while(b > 0)
{
if(b%2 == 1)
{
x=(x*y);
 x%=MOD;
}
y = (y*y);
y%=MOD;
b /= 2;
}
return x;
}
 
 
long long InverseEuler(ll n, ll MOD)
{
return pow(n,MOD-2,MOD);
}
 
 
ll C(ll n,ll r,ll MOD)
{
    ll i,f[5000];
for(i=0;i<n;i++)
f[i]=1;
for ( i=2; i<=n;i++)
f[i]= (f[i-1]*i) % MOD;
return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
 
 
 
 
 
 
ll check(ll n ,ll r){
if(n<r)
    return 0;
if(n==r||r==0)
    return 1;
 while(r!=1){
if(n%2==0&&r%2!=0)
return 0;
 
n=n/2;
r=r/2;
 
 }
 
 
return (n%2);
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
ll n,m,k,a[5006],i,j,l,t;
ll MOD=1000000007;
ll MOD1=1000000006;
ll MOD2=500000003;
 
cin>>t;
 
while(t--){
   ll ans=1,res;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
 
    sort(a,a+n);
 
 
 
    l=n/2;
 
if(n%2==0)
    l--;
 
    k=k-1;
    m=n-1;
  ll pol1=C(m,k,MOD2);
 ll pol2=check(m,k);
 
  ll p1,p2;
for(i=1;i<=l;i++){
 
    if(m-i>=k&&i>=k){
         p1=(pol1-C(m-i,k,MOD2)+MOD2)%MOD2;
         p1=(p1-C(i,k,MOD2)+MOD2)%MOD2;
         p2=(pol2-check(m-i,k)-check(i,k)+2)%2;
         p2=(p2-C(i,k,2)+2)%2;
    }
 
else
if(m-i>=k){
    p1=(pol1-C(m-i,k,MOD2)+MOD2)%MOD2;
    p2=(pol2-check(m-i,k)+2)%2;
}
else
if(i>=k){
    p1=(pol1-C(i,k,MOD2)+MOD2)%MOD2;
    p2=(pol2-check(i,k)+2)%2;
}
    else{
      p1=pol1%MOD2;
      p2=pol2%2;
    }
 
 
 if(a[i]==a[n-1-i])
    res=a[i];
 else
    res=(a[i]*a[n-i-1])%MOD;
 
 
    p1=(2*p1)%MOD1;
       p1=(2*p1)%MOD1;
       p1=(3*p1)%MOD1;
        p1=(3*p1)%MOD1;
         p1=(7*p1)%MOD1;
          p1=(109*p1)%MOD1;
           p1=(109*p1)%MOD1;
            p1=(167*p1)%MOD1;
      p2=(500000003*p2)%MOD1;
    ll p;
    p=(p1+p2)%MOD1;
 ans=(ans*(pow(res,p,MOD)%MOD))%MOD;
 
 
}
 
 
cout<<ans<<" \n";
 
 
}
 
 
}