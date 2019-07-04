#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for (ll i=0;i<n;i++)
        cin>>a[i];
    ll ans=INT_MAX;
    ll t_val=0;
    for (ll i=1;i<=100;i++)
    {
        ll sum=0;
        for (ll j=0;j<n;j++)
        {
            if (abs(a[j]-i)<=1)
                sum+=0;
            else 
                sum+=(abs(a[j]-i)-1);
        }
        if (sum<ans)
        {
            ans=sum;
            t_val=i;
        }
    }
    cout<<t_val<<" "<<ans;
}