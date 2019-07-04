#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll l,r,d;
        cin>>l>>r>>d;
        if (d>r)
            cout<<d<<endl;
        else if (d<l)
            cout<<d<<endl;
        else
        {
            ll a=ceil((double)r/d);
            if (r%d==0)
            {
                ll a=r/d+1;
                cout<<a*d<<endl;
            }
            else
                cout<<a*d<<endl;
        }
    }
}