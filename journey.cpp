#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[100004];
ll vis[100004];
double dp[100004];
void solve (ll n)
{
	// cout<<n<<endl;
	// cout<<dp[n]<<endl;
	if (dp[n]!=-1)
		return;
	else
	{
		if (v[n].size()==0&&!vis[n])
		{
			vis[n]=1;
			dp[n]=0;
			return;
		}
		else
		{
			double ans=0;
			for (ll i=0;i<v[n].size();i++)
			{
				if (!vis[v[n][i]])
				{
				vis[v[n][i]]=1;
				solve(v[n][i]);
				if (n==1)
				ans=ans+((double)1/v[n].size())*(double)(1+dp[v[n][i]]);
				else
				ans=ans+((double)1/(v[n].size()-1))*(double)(1+dp[v[n][i]]);
				}
			}
			//cout<<ans<<endl;
			dp[n]=ans;
			return;
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	for (ll i=0;i<n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (ll i=0;i<=n;i++)
		dp[i]=-1;
	memset(vis,0,sizeof(vis));
	vis[1]=1;
	solve(1);
	cout<<setprecision(10)<<dp[1];
}