#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fact[100005];
void factorial (ll mod){
ll i,j;
fact[0]=1;
fact[1]=1;
for(i=2;i<100005;i++){
    if(i%2==0){
        fact[i]=((i/2)%mod*fact[i-1]%mod)%mod;
    }
    else{
        fact[i]=(i%mod*fact[i-1]%mod)%mod;
    }
}

}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
ll mod =1000000007;
cin>>t;
factorial(mod);
while(t--){
    ll n,i,j,k;
    cin>>n;
    map <ll,ll> m;
    map <ll,ll> :: iterator it;
    map <ll,ll> :: reverse_iterator it1;
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
    for(it1=m.rbegin();it1!=m.rend();it1++){
        ll q=it1->second;

        if(q%2) c++;

        if(c%2){
            ans=(ans%mod*q%mod)%mod;
            ans=(ans%mod*(fact[q-1])%mod)%mod;
        }
        else{

            ans=(ans%mod*(fact[q])%mod)%mod;
        }
       // cout<<it->first<<" "<<it->second<<endl;

    }
 cout<<ans<<endl;
}

}
