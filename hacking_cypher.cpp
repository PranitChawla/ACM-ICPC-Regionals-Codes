#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll modular_exp (ll x,ll n,ll M)
{
	if (n==0)
		return 1;
	else if (n%2==0)
		return (modular_exp((x*x)%M,n/2,M))%M;
	else 
		return (x*modular_exp((x*x)%M,(n-1)/2,M)%M);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	ll a,b;
	cin>>a>>b;
	ll size=s.length();
	ll ar[size];
	for (ll i=0;i<s.length();i++)
		ar[i]=(ll)(s[i]-48);
	// for (ll i=0;i<size;i++)
	// 	cout<<ar[i]<<" ";
	ll dp1[size]={0};
	ll dp2[size]={0};
	for (ll i=size-1;i>=0;i--)
	{
		if (i==size-1)
		{
			dp1[i]=(ar[i]%b*modular_exp(10,size-1-i,b)%b)%b;
		}
		else
		{
			dp1[i]=(dp1[i+1]%b+(ar[i]%b)*(modular_exp(10,size-1-i,b)%b))%b;
		}
	}
	// for (ll i=size-1;i>=0;i--)
	// 	cout<<dp1[i]<<" ";
	// for (ll i=0;i<size;i++)
	// 	cout<<dp1[i]<<" ";
	for (ll i=0;i<size;i++)
	{
		if (i==0)
			dp2[i]=(ar[i]%a*modular_exp(10,i,a)%a)%a;
		else
		{
			dp2[i]=(((dp2[i-1]%a)*10)%a+ar[i]%a)%a;
		}
	}
	// for (ll i=0;i<size;i++)
	// 	cout<<dp2[i]<<" ";
	// cout<<endl;
	ll l,r,j;
	int f=0;
	for (ll i=size-1;i>0;i--)
	{
		if (dp1[i]==0&&dp2[i-1]==0)
		{
			if (ar[i])
			{
				//cout<<i<<endl;
				// int z=i-1;
				// ll m=0;
				// for (j=z;j>=0;j--)
				// {
				// 	m=(m%a+((ar[j]%a)*(modular_exp(10,z-j,a))%a)%a)%a;
				// }
				// if (m==0)
				// {
				// 	r=i;
				// 	l=z;
				// 	f=1;
				// 	break;
				// }
				l=i-1;
				r=i;
				f=1;
				break;
			}
		}
	}
	if (f)
	{
		cout<<"YES"<<endl;
		//cout<<l<<" "<<r<<endl;
		for (ll i=0;i<=l;i++)
			cout<<ar[i];
		cout<<endl;
		for (ll i=r;i<size;i++)
			cout<<ar[i];
	}
	else
		cout<<"NO";

}