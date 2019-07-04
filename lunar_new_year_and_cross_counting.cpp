#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
bool isvalid (ll i,ll j)
{
    if (i>=1&&i<=n&&j>=1&&j<=n)
        return true;
    else 
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    char a[n+1][n+1];
    for (ll i=1;i<=n;i++)
    {
        for (ll j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    ll d=0;
    for (ll i=1;i<=n;i++)
    {
        for (ll j=1;j<=n;j++)
        {
            if (a[i][j]=='X')
            {
                if (isvalid(i-1,j-1)&&isvalid(i-1,j+1)&&isvalid(i+1,j-1)&&isvalid(i+1,j+1))
                {
                    if (a[i-1][j-1]=='X'&&a[i+1][j-1]=='X'&&a[i-1][j+1]=='X'&&a[i+1][j+1]=='X')
                        d++;
                }
            }
        }
    }
    cout<<d;
}