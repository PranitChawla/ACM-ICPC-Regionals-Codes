#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
    ll n;
    cin>>n;
    ll a[n];
    ll s=0;
    for (ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=(a[i]-1);
    }
   cout<<s+1<<endl;
}