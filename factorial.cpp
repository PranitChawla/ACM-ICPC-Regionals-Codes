#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll M=pow(10,9)+7;
ll fact[100005];
void factorial (ll N)
{
	fact[0]=1;
	fact[1]=1;
		for (ll i=2;i<=N;i++)
			fact[i]=((i%M)*(fact[i-1]%M))%M;
		//temp=fact[N];
	//return fact[N];
}
int main()
{
	ll T;
	cin>>T;
	factorial(100000);
	while (T--)
	{
		ll N;
		cin>>N;
		// for (ll i=1;i<=N;i++)
		// 	fact[i]=-1;
		cout<<fact[N]<<endl;
	}
}