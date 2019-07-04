#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v[210];
ll dp[210];
void solve (ll n)
{
	if (dp[n]!=-1)
		return;
	else
	{
		if (v[n].size()==0)
		{
			dp[n]=1;
			return;
		}
		else
		{
			ll ma=INT_MIN;
			for (ll i=0;i<v[n].size();i++)
			{
				solve(v[n][i]);
				ma=max(ma,dp[v[n][i]]);
			}
			dp[n]=1+ma;
			return;
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	map <string,ll> m;
	ll c=1;
	memset(dp,-1,sizeof(dp));
	for (ll i=0;i<n;i++)
	{
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		transform(s1.begin(), s1.end(), s1.begin(),::tolower);
		transform(s3.begin(), s3.end(), s3.begin(),::tolower);
		if (m.find(s3)==m.end())
		{
			m.insert(make_pair(s3,c));
			c++;
		}
		if (m.find(s1)==m.end())
		{
			m.insert(make_pair(s1,c));
			c++;
		}
		v[m[s3]].push_back(m[s1]);
	}
	// cout<<c<<endl;
	ll ma=INT_MIN;
	for (ll i=1;i<c;i++)
	{
		solve(i);
		ma=max(ma,dp[i]);
	}
	cout<<ma;
}