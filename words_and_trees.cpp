#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[100004];
int main()
{
	ll n,q;
	cin>>n>>q;
	char s[n+1];
	ll vis[n+1];
	memset(vis,0,sizeof(vis));
	vector < pair <ll,string> > ques;
	ll freqi[q][27];
	for (ll i=0;i<n;i++)
		cin>>s[i];
	for (ll i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (ll i=0;i<q;i++)
	{
		ll a;
		string s;
		cin>>a>>s;
		ques.push_back(make_pair(a,s));

	}
	string st[n+1];
	stack <ll> q1;
	q1.push(1);
	vis[1]=1;
	while (!q1.empty())
	{
		ll temp=q1.top();
		q1.pop();
		for (ll i=0;i<v[temp].size();i++)
		{
			if (!vis[i])
			{
				st[temp].push_back(s[i]);
				vis[i]=1;
				q1.push(i);
			}
		}
	}
	for (ll i=1;i<=n;i++)
		cout<<st[i]<<endl;
}