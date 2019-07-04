#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[100005];
ll d[100005];
ll vis[100005];
int main()
{
	ll n,s;
	cin>>n>>s;
	for (ll i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ll diam=INT_MIN;
	memset(d,0,sizeof(d));
	memset(vis,0,sizeof(vis));
	vis[1]=1;
	queue <ll> q;
	q.push(1);
	while (!q.empty())
	{
		ll temp=q.front();
		q.pop();
		for (ll i=0;i<v[temp].size();i++)
		{
			if (!vis[v[temp][i]])
			{
				vis[v[temp][i]]=1;
				d[v[temp][i]]=d[temp]+1;
				q.push(v[temp][i]);
			}
		}
	}
	ll max_node;
	ll max_dis=INT_MIN;
	for (ll i=1;i<=n;i++)
	{
		if (d[i]>max_dis)
		{
			max_dis=d[i];
			max_node=i;
		}
	}
	memset(vis,0,sizeof(vis));
	memset(d,0,sizeof(d));
	d[max_node]=0;
	vis[max_node]=1;
	q.push(max_node);
	while (!q.empty())
	{
		ll temp=q.front();
		q.pop();
		for (ll i=0;i<v[temp].size();i++)
		{
			if (!vis[v[temp][i]])
			{
				vis[v[temp][i]]=1;
				d[v[temp][i]]=d[temp]+1;
				q.push(v[temp][i]);
			}
		}
		for (ll i=1;i<=n;i++)
			diam=max(diam,d[i]);
	}
	double ans;
	if (diam%2==0)
	{
		double a=(double)s/(n-1);
		ans=a*(double)diam;
		printf("%0.10lf",ans);
		cout<<endl;
	}
	else
	{
		ll zeros=(diam)/2;
		double left=n-1-zeros;
		double a=(double)s/left;
		ans=a*(double)(diam-zeros);
		printf("%0.10lf",ans);
		cout<<endl;
	}
}