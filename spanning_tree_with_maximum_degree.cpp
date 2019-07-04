#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[200004];
ll vis[200004];
int main()
{
	ll n,m;
	cin>>n>>m;
	for (ll i=0;i<m;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ll ma=INT_MIN;
	ll ma_ind;
	for (ll i=1;i<=n;i++)
	{
		//cout<<v[i].size()<<" "<<ma<<endl;
		ll k=v[i].size();
		if (k>ma)
		{
			ma=k;
			ma_ind=i;
			//cout<<"check"<<endl;
		}
		// for (ll j=0;j<v[i].size();j++)
		// {
		// 	cout<<v[i][j]<<" ";
		// }
		// cout<<endl;
	}
	//cout<<ma_ind<<endl;
	memset(vis,0,sizeof(vis));
	vis[ma_ind]=1;
	queue <ll> q;
	for (ll i=0;i<v[ma_ind].size();i++)
	{
		vis[v[ma_ind][i]]=1;
		cout<<ma_ind<<" "<<v[ma_ind][i]<<endl;
		q.push(v[ma_ind][i]);
	}
	while(!q.empty())
	{
		ll t=q.front();
		q.pop();
		for (ll i=0;i<v[t].size();i++)
		{
			if (vis[v[t][i]]==0)
			{
				vis[v[t][i]]=1;
				q.push(v[t][i]);
				cout<<t<<" "<<v[t][i]<<endl;
			}
		}
	}
}