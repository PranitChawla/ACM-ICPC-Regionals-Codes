#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll n=s.length();
    stack <char> q;
    ll c=0;
    for (ll i=0;i<n;i++)
    {
    	if (q.empty())
    		q.push(s[i]);
    	else 
    	{
    		if (q.top()==s[i])
    		{
    			q.pop();
    			c++;
    		}
    		else
    		{
    			q.push(s[i]);
    		}
    	}
    }
    if (c%2==1)
    	cout<<"Yes";
    else
    	cout<<"No";
}