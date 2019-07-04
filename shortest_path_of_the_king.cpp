#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isvalid (ll x, ll y)
{
	if (x>=1&&x<=8&&y>=1&&y<=8)
		return true;
	else
		return false;
}
int main()
{
	string a,b;
	cin>>a>>b;
	ll sx,sy,ex,ey;
	sx=a[0]-'a'+1;
	sy=a[1]-'0';
	ex=b[0]-'a'+1;
	ey=b[1]-'0';
	ll dis[9][9];
	ll vis[9][9];
	pair <ll,ll> parent[9][9];
	for (ll i=1;i<=8;i++)
	{
		for (ll j=1;j<=8;j++)
		{
			dis[i][j]=INT_MAX;
			vis[i][j]=0;
			parent[i][j]=make_pair(-1,-1);
		}
	}
	dis[sx][sy]=0;
	vis[sx][sy]=1;
	parent[sx][sy]=make_pair(sx,sy);
	queue < pair <ll,ll> > q;
	q.push(make_pair(sx,sy));
	while (!q.empty())
	{
		pair <ll,ll> p;
		p=q.front();
		q.pop();
		ll curx=p.first;
		ll cury=p.second;
		for (ll i=-1;i<=1;i++)
		{
			for (ll j=-1;j<=1;j++)
			{
				ll nx=curx+i;
				ll ny=cury+j;
				if (isvalid(nx,ny))
				{
					if (!vis[nx][ny])
					{
						vis[nx][ny]=1;
						dis[nx][ny]=dis[curx][cury]+1;
						parent[nx][ny]=make_pair(curx,cury);
						q.push(make_pair(nx,ny));
					}
				}
			}
		}
	} 	
	cout<<dis[ex][ey]<<endl;
	ll x=ex;
	ll y=ey;
	stack <string> path;
	while (1)
	{
		if (x==parent[x][y].first+1&&y==parent[x][y].second)
			path.push("R");
		else if (x+1==parent[x][y].first&&y==parent[x][y].second)
			path.push("L");
		else if (x==parent[x][y].first&&y==parent[x][y].second+1)
			path.push("U");
		else if (x==parent[x][y].first&&y+1==parent[x][y].second)
			path.push("D");
		else if (x==parent[x][y].first+1&&y==parent[x][y].second+1)
			path.push("RU");
		else if (x==parent[x][y].first-1&&y==parent[x][y].second+1)
			path.push("LU");
		else if (x==parent[x][y].first-1&&y==parent[x][y].second-1)
			path.push("LD");
		else if (x==parent[x][y].first+1&&y==parent[x][y].second-1)
			path.push("RD");
		// cout<<x<<" "<<y<<" "<<parent[x][y].first<<" "<<parent[x][y].second<<endl;
		ll x1, y1;
		x1=parent[x][y].first;
		y1=parent[x][y].second;
		x=x1;
		y=y1;
		if (x==parent[x][y].first&&y==parent[x][y].second)
			break;
	}
	while (!path.empty())
	{
		string s=path.top();
		path.pop();
		cout<<s<<endl;
	}
}