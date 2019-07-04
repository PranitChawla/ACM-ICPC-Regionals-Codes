#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin>>s;
    ll f1=-1;
    ll f2=-1;
    ll f3=-1;
    ll f4=-1;
    for (ll i=0;i<s.length();i++)
    {
        if (f1==-1)
        {
        if (s[i]=='[')
            f1=i;
        }
        if (f2==-1)
        {            
            if (s[i]==':')
                {
                    if (f1!=-1)
                    {
                            f2=i;
                    }
                }
        }
    }
    for (ll i=s.length()-1;i>=0;i--)
    {
       if (f4==-1)
       {
            if (s[i]==']')
                f4=i;
       }
       if (f3==-1)
       {
            if (s[i]==':')
            {
                if (i!=f2&&f4!=-1)
                    f3=i;
            }
       }
    }
    if (f1==-1||f2==-1||f3==-1||f4==-1)
        cout<<-1;
    else if (f1<f2&&f2<f3&&f3<f4)
    {
        ll c=0;
        for (ll i=f2;i<=f3;i++)
        {
            if (s[i]=='|')
                c++;
        }
        cout<<c+4;
    }
    else
    {
        cout<<-1;
    }

}