#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll a[5][5];
    ll b[5][5];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    ll n=s.length();
    vector < pair <ll,ll> > ans;
    ll c1=0;
    ll c2=1;
    for (ll k=0;k<n;k++)
    {
    	if (s[k]=='0')
    	{
    	   if (c1%2==0)
    	   {
    	   	c1++;
    	   	cout<<1<<" "<<1<<endl;
    	   }
    	   else
    	   {
    	   	cout<<3<<" "<<1<<endl;
    	   	c1++;
    	   }

    	}
    	else
    	{
    		cout<<c2<<" "<<3<<endl;
    		if (c2==4)
    			c2=1;
    		else
    			c2++;
    	}
  }
}