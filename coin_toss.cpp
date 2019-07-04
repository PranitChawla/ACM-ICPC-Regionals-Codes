#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define t int t; cin>>t; while(t--)
#define clear(a,x) memset(a,x,sizeof(a))
ll Mi=pow(10,9)+7;
void multiply(ll a[3][3], ll b[3][3])
{
    // Creating an auxiliary matrix to store elements 
    // of the multiplication matrix
    ll mul[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
                mul[i][j] = ((mul[i][j])%Mi+ (a[i][k]%Mi*b[k][j]%Mi)%Mi)%Mi;
        }
    }
 
    // storing the muliplication resul in a[][]
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            a[i][j] = mul[i][j]%Mi;  // Updating our matrix
}
 
ll power(ll F[3][3], ll n)
{
    ll M[3][3] = {{1,1,1},{1,0,0},{0,1,0}};
 
    // Multiply it with initial values i.e with
    // F(0) = 0, F(1) = 1, F(2) = 1
    if (n==1)
        return (F[0][0]%Mi + F[0][1]%Mi)%Mi;
 
    power(F, n/2);
 
    multiply(F, F);
 
    if (n%2 != 0)
        multiply(F, M);
 
    // Multiply it with initial values i.e with
    // F(0) = 0, F(1) = 1, F(2) = 1
    return (F[0][0]%Mi + F[0][1]%Mi)%Mi ;
}
 
ll fib(ll n)
{
  ll F[3][3] = {{1,1,1},{1,0,0},{0,1,0}};
  // if (n == 0)
  //   return 0;
 return  power(F, n-2);
  //return (F[2][2])%Mi;
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		cout<<fib(n+2)<<endl;
	}
}