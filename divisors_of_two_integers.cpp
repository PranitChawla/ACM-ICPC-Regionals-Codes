#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll f[10004];
    memset(f,0,sizeof(f));
    for (ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	f[a[i]]++;
    }
    sort(a,a+n);
    ll y=a[n-1];
    ll v[10004];
    ll fl=0;
    memset(v,0,sizeof(v));
    for (ll i=1;i<=10000;i++)
    {
    	if (f[i]==1)
    	{
    		if (y%i==0)
    		{
    			v[i]=1;
    		}
    		else
    		{
    			v[i]=-1;
    			fl=1;
    		}
    	}
    }
    ll x;
    if (fl==1)
    {
    for (ll i=n-1;i>=0;i--)
    {
    	if (v[a[i]]==-1)
    	{
    		x=a[i];
    		break;
    	}
    }
	}
	else
	{
		for (ll i=n-1;i>=0;i--)
    {
    	if (v[a[i]]==0)
    	{
    		x=a[i];
    		break;
    	}
    }
	}
    cout<<x<<" "<<y<<endl;

}