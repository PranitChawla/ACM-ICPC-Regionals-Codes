#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll>v[100004];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    for (ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll vis[n+1];
    memset(vis,0,sizeof(vis));
    vis[1]=1;
    priority_queue< ll,vector<ll>,greater<ll> >q;    
    q.push(1);
    while (!q.empty())
    {
        ll t=q.top();
        q.pop();
        cout<<t<<" ";
        for (ll i=0;i<v[t].size();i++)
        {
            if (!vis[v[t][i]])
            {
                vis[v[t][i]]=1;
                q.push(v[t][i]);
            }
        }
    }
}