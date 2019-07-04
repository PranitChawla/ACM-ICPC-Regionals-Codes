#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
    ll cost,index;
}data;
bool compare (data a, data b)
{
    if (a.cost!=b.cost)
        return a.cost<b.cost;
    else
        return a.index<b.index;
}
vector <ll> v[100004];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n+1];
    ll b[n+1];
    for (ll i=1;i<=n;i++)
        cin>>a[i];
    data da[n+1];
    for (ll i=1;i<=n;i++)
    {
        cin>>b[i];
        da[i].cost=b[i];
        da[i].index=i;
    }
    sort(da+1,da+1+n,compare);
    queue <data> q;
    for (ll i=1;i<=n;i++)
    {
        q.push(da[i]);
    }
    for (ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        ll diff;
        diff=y-a[x];
        ll c=0;
        if (diff<=0)
        {
            a[x]=a[x]-y;
            c+=(y*b[x]);
        }
        else if (y>a[x])
        {
            c+=(a[x]*b[x]);
            a[x]=0;
            while (diff!=0&&!q.empty())
            {
                data t=q.front();
                if (a[t.index]>=diff)
                {
                    c+=(t.cost*(diff));
                    a[t.index]=a[t.index]-diff;
                    diff=0;
                }
                else
                {
                     c+=(t.cost*(a[t.index]));
                     diff=diff-a[t.index];
                     a[t.index]=0;
                    q.pop();
                }
            }
        if (diff!=0)
            c=0;
        }
        cout<<c<<endl;
    }

}