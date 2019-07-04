#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		ll N;
		int K;
		cin>>N>>K;
		ll A[N][K];
		for (ll i=0;i<N;i++)
			for (int j=0;j<K;j++)
			cin>>A[i][j];
		vector <ll> dims[K];
		for (int i=0;i<K;i++)
		{
			for (ll j=0;j<N;j++)
				dims[i].push_back(A[j][i]);
		}
		for (int i=0;i<K;i++)
			sort(dims[i].begin(),dims[i].end());
		if (N%2==0)
		{
			for (int i=0;i<K;i++)
				cout<<dims[i][(N-1)/2]<<" ";
		}
		else
		{
			for (int i=0;i<K;i++)
				cout<<dims[i][N/2]<<" ";
		}
	}
}