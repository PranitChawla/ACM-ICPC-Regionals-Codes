#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll f[27];
    memset(f,0,sizeof(f));
    ll i=0;
    if (n==1)
    {
        if (k==1)
            cout<<1;
        else
            cout<<0;
    }
    else
    {
    while (i<n-1)
    {
        ll c=1;
        if (s[i]==s[i+1])
        {
            while (s[i]==s[i+1]&&i<n-1)
            {
                c++;
                i++;
            }
        }
            c/=k;
            f[s[i]-'a'+1]+=c;
            i++;
    }
    ll ans=0;
    for (ll i=1;i<=26;i++)
        {
            ans=max(ans,f[i]);
            //cout<<f[i]<<" ";
        }
        cout<<ans;
    }
}