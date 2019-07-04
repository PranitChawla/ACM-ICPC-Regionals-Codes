#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,i,j,k;
    cin>>n;
    map <string,ll> m;
    map <string,ll> :: iterator it;

    for(i=1;i<=n;i++){
        string temp;
        cin>>temp;
        it=m.find(temp);
        if(it!=m.end()){
            (it->second)++;
        }
        else
           {

               m.insert(make_pair(temp,1));

           }

    }
    ll tot=0;
    for (it=m.begin();it!=m.end();it++)
    {
        string s;
        ll f;
        s=it->first;
        f=it->second;
       // cout<<s<<" "<<f<<endl;
        int a[s.length()];
        ll ti=0;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='d'||s[i]=='f')
                a[i]=1;
            else 
                a[i]=0;
        }
        // for (int i=0;i<s.length();i++)
        //     cout<<a[i]<<" ";
        // cout<<endl;
        for (int i=0;i<s.length();i++)
        {
            if (i==0)
                ti+=2;
            else if (a[i]!=a[i-1])
                ti+=2;
            else
                ti+=4;
        }
        ti=ti+(f-1)*(ti/2);
       // cout<<ti<<endl;
        tot+=ti;
        // cout<<tot<<endl;
    }
    cout<<tot<<endl;
}
}