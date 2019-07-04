#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    int f=0;
    for (ll i=0;i<n;i++)
        cin>>a[i];
    ll po=1<<n;
    for (ll i=0;i<po;i++)
    {
        ll sum=0;
        bitset<15> bset2(i);
        for (ll j=0;j<n;j++)
        {
            if (bset2[j]==1)
                sum+=a[n-j-1];
            else
                sum-=a[n-j-1];
        }
        if (sum%360==0)
            f=1;
    }
    if (f)
        cout<<"YES";
    else
        cout<<"NO";
}