#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		string s[n];
		bool is_visited [n][m];
		vector < pair <int,int> > v;
		for (int i=0;i<n;i++)
			cin>>s[i];
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				if (s[i][j]=='1')
				{
					v.push_back(make_pair(i+1,j+1));
				}
			}
		}
		int c[n+m-1];
		memset(c,0,sizeof(c));
		for (int i=0;i<v.size()-1;i++)
		{
			for (int j=i+1;j<v.size();j++)
			{
				int dis;
				dis=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
				c[dis]++;
			}
		}
		for (int i=1;i<=n+m-2;i++)
			cout<<c[i]<<" ";
		cout<<endl;
}
}