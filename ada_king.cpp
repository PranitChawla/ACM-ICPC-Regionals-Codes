#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isvalid (ll i, ll j)
{
	if (i>=1&&i<=8&&j>=1&&j<=8)
		return true;
	else
		return false;
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
	ll r,c,k;
	cin>>r>>c>>k;
	ll dis[9][9];
	ll vis[9][9];
	pair <ll,ll> x;
	x.first=r;
	x.second=c;
	memset(dis,0,sizeof(dis));
	memset(vis,0,sizeof(vis));
	queue <pair <ll,ll> > q;
	vis[r][c]=1;
	q.push(x);
	while (!q.empty())
	{
		pair <ll,ll> temp;
		temp=q.front();
		q.pop();
		ll cx=temp.first;
		ll cy=temp.second;
		for (ll i=cx-1;i<=cx+1;i++)
		{
			for (ll j=cy-1;j<=cy+1;j++)
			{
				if (!((i==cx)&&(j==cy)))
				{
					if (isvalid(i,j))
					{
						if (!vis[i][j])
						{
							vis[i][j]=1;
							dis[i][j]=dis[cx][cy]+1;
							pair <ll,ll> p;
							p.first=i;
							p.second=j;
							q.push(p);
						}
					}
				}
			}
		}
	}
	ll ans=0;
	for (ll i=1;i<=8;i++)
	{
		for (ll j=1;j<=8;j++)
		{
			if (dis[i][j]<=k)
			ans++;
			//cout<<dis[i][j]<<" ";
		}
		//cout<<endl;
	}
	cout<<ans<<endl;
	}
}