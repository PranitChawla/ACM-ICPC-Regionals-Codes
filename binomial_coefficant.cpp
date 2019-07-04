#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ncr (ll n,ll m)
{
ll i,j;
ll bc[1000][1000];
for (i=0; i<=n; i++) bc[i][0] = 1;
for (j=0; j<=n; j++) bc[j][j] = 1;
for (i=1; i<=n; i++)
for (j=1; j<i; j++)
bc[i][j] = bc[i-1][j-1] + bc[i-1][j];
return bc[n][m];
}
int main()
{
	cout<<ncr(5,2)<<endl;
}