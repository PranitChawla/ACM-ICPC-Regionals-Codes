#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{   
    string s;
    cin>>s;
    ll n=s.size();
    ll prod=1;
    ll temp=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='a')
            temp++;
        if(s[i]=='b')
        {
            prod=(prod*(temp+1))%m;
            temp=0;
        }
    }
    prod=(prod*(temp+1))%m;
    prod=(prod+m-1)%m;
    cout<<prod;
    
    
    return 0;
}