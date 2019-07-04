    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ll t;
        cin>>t;
        while (t--)
        {
            ll n;
            cin>>n;
            ll q;
            cin>>q;
            map <ll,ll> m;
            multimap <ll,ll> m2;
            for (ll i=1;i<=n;i++)
            {
                ll temp;
                cin>>temp;
                m.insert(make_pair(i,temp));
                m2.insert(make_pair(temp,i));
            }
            map <ll,ll>::iterator it;
            for (ll i=0;i<q;i++)
            {
                ll a,b;
                cin>>a>>b;
                m.erase(a);
                it=m.upper_bound(b);
                // if (it==m.end())
                //     cout<<-1<<" ";
                // else
                    cout<<it->first<<" ";
            }
            cout<<endl;
        }
    }