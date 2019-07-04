#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll Mi=pow(10,9)+7;
void multiply(ll F[3][3], ll M[3][3])
{
  ll x =  (F[2][0]%Mi*M[0][0]%Mi + F[2][1]%Mi*M[1][0]%Mi+F[2][2]*M[2][0])%Mi;
  ll y =  (F[2][0]%Mi*M[0][1]%Mi + F[2][1]%Mi*M[1][1]%Mi+F[2][2]*M[2][1])%Mi;
  ll z=   (F[2][0]%Mi*M[0][2]%Mi + F[2][1]%Mi*M[1][2]%Mi+F[2][2]*M[2][2])%Mi;
  //ll w =  (F[1][0]%Mi*M[0][1]%Mi + F[1][1]%Mi*M[1][1]%Mi)%Mi;
 
  F[2][0] = x;
  F[2][1] = y;
  F[2][2] = z;
  //F[1][1] = w;
}
void power(ll F[3][3], ll n)
{
  if( n == 0 || n == 1)
      return;
 ll M[3][3] = {{0,1,0},{0,0,1},{1,1,1}};
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
ll fib(ll n)
{
  ll F[3][3] = {{0,1,0},{0,0,1},{1,1,1}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return (F[2][2])%Mi;
}
// ll fib (ll n)
// {
// 	if (n==0)
// 		return 0;
// 	else if (n<=2)
// 		return 1;
// 	else if (n%2==0)
// 	{
// 		ll k=n/2;
// 		return (((2*fib(k-1))%M+(fib(k)))%M*(fib(k))%M)%M;
// 	}
// 	else
// 	{
// 		ll k=(n+1)/2;
// 		return ((fib(k)%M*fib(k)%M+fib(k-1)%M*fib(k-1)%M))%M;
// 	}
// }
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		cout<<fib(n+2)<<endl;
	}
}