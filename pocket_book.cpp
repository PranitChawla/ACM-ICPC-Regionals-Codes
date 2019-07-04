#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll mod=1000000007;
	int n,m;
	cin>>n>>m;
	string s[n];
	for (int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	ll ans=1;
	for (int j=0;j<m;j++)
	{
		bool alp[27];
		memset(alp,0,sizeof(alp));
		for (int i=0;i<n;i++)
		{
			alp[s[i][j]-'A'+1]++;
		}
		int count=0;
		for (int i=1;i<=26;i++)
		{
			if (alp[i])
				count++;
		}
		ans=(ans%mod*count%mod)%mod;
	}
	cout<<ans;
}