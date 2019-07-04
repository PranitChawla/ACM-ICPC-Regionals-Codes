#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    string s[n];
    vector <ll> o;
    vector <ll> c;
    ll pre=0;
    for (ll i=0;i<n;i++)
    {
        cin>>s[i];
        stack <char> q;
        stack <char> temp;
        int f1=0;
        for (ll j=0;j<s[i].length();j++)
        {
            if (s[i][j]=='(')
            {
                q.push(s[i][j]);
                temp.push(s[i][j]);
            }
            else
            {
                if (q.empty()||q.top()==')')
                {
                    q.push(s[i][j]);
                    temp.push(s[i][j]);
                }
                else
                {
                    q.pop();
                    temp.pop();
                }
            }
        }
        int f2=0;
        while (!temp.empty())
        {
            char a;
            a=temp.top();
            if (a==')')
                f1=1;
            else
                f2=1;
            temp.pop();
        }
        if (f1&&f2)
            continue;
        if (!q.empty())
        {
        if (q.top()==')')
                c.push_back(q.size());
            else
                o.push_back(q.size());
        }
        else
            pre++;
    }
    map <ll,ll> m1,m2;
    map <ll,ll>::iterator it,it2;
    for (ll i=0;i<o.size();i++)
    {
        if (m1.find(o[i])!=m1.end())
        {
            it=m1.find(o[i]);
            it->second++;
        }
        else
            m1.insert(make_pair(o[i],1));
    }
    for (ll i=0;i<c.size();i++)
    {
        if (m2.find(c[i])!=m2.end())
        {
            it=m2.find(c[i]);
            it->second++;
        }
        else
            m2.insert(make_pair(c[i],1));
    }
    ll ans=0;
    for (it=m1.begin();it!=m1.end();it++)
     {
        if (m2.find(it->first)!=m2.end())
        {
            it2=m2.find(it->first);
            ans+=min(it2->second,it->second);
        }
     }
     cout<<ans+pre/2<<endl;
}