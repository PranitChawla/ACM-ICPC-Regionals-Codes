#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void bfs (vector <ll> adj_list[],ll start,ll n, ll cost[],ll b[])
{
	bool is_visited[n+1];
	memset(is_visited,0,sizeof(is_visited));
	queue <ll> a;
	a.push(start);
	is_visited[start]=1;
	cost[start]=0;
	ll k=1;
	b[k]=0;
	k++;
	while (a.size()>0)
	{
		ll temp;
		temp=a.front();
		vector <ll>::iterator it;
		for (it=adj_list[temp].begin();it!=adj_list[temp].end();it++)
		{
			if (is_visited[*it]==0)
			{
				is_visited[*it]=1;
				cost[*it]=(cost[temp]+1);
				b[k]=cost[*it];
				k++;
				a.push(*it);
			}
		}
		a.pop();
	}
	// for (ll i=1;i<=n;i++)
	// 	cout<<cost[i]<<" ";
}
int main()
{
	ll n;
	cin>>n;
	vector <ll> adj_list[n+1];
	ll cost[n+1];
	ll b[n+1];
	memset(b,0,sizeof(b));
	memset(cost,-1,sizeof(cost));
	for (ll i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		adj_list[a].push_back(b);
		adj_list[b].push_back(a);
	}
	bfs(adj_list,1,n,cost,b);
	ll c[n+1];
	for (ll i=1;i<=n;i++)
		cin>>c[i];
	// map <ll,ll> m;
	// for (ll i=1;i<=n;i++)
	// {

	// 	m.insert(make_pair(i,cost[c[i]]));
	// }
	// map <ll,ll>::iterator it;
	// for (ll i=1;i<=n;i++)
	// {
 //      it=m.find(c[i]);
 //      c[i]=it->second;
	// }
	// for(ll i=1;i<=n;i++){
     
 //        if(c[i]!=cost[i])
 //        {
 //        	cout<<"No"<<endl;
 //        	exit(0);
 //        }
	// }
	// cout<<"Yes"<<endl;
	// ll temp=0;
	// for (ll i=1;i<=n;i++)
	// {
	// 	if (cost[c[i]]==temp+1)
	// 		temp++;
	// 	else if (cost[c[i]]!=temp)
	// 	{
	// 		cout<<"No";
	// 		exit(0);
	// 	}
	// }
	// cout<<"Yes";
	int flag=0;
	for (ll i=1;i<=n;i++)
	{
		//cout<<b[i]<<" ";
		if (cost[c[i]]!=b[i])
		{
			flag=1;
			break;
		}
	}
	if (flag==0)
		cout<<"Yes";
	else
		cout<<"No";
}