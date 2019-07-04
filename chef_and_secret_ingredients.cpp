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
    	string s[n];
    	ll f[27];
    	memset(f,0,sizeof(f));
    	for (ll i=0;i<n;i++)
    	{
    		cin>>s[i];
    		for (char a='a';a<='z';a++)
    		{
    			string s1(1,a);
    			if (s[i].find(s1)!=string::npos)
    				f[a-'a'+1]++;
    		}
    	}
    	ll ans=0;
    	for (ll i=1;i<=26;i++)
    	{
    		if (f[i]==n)
    			ans++;
    	}
    	cout<<ans<<endl;
    }
}