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
typedef struct 
{
	ll A;
	ll B;
}point;
// ll solve_equation (ll C)
// {
// 	double D;
// 	D=sqrt(4*C+1);
// 	double root;
// 	root=(D-1)/2;
// 	ll k;
// 	if (root==(int)root)
// 		return (int)root;
// 	else 
// 		return -1;
// }
int main()
{
	ll N,Q;
	cin>>N>>Q;
	point arr[N+1];
	ll rhs[N+1];
	map <ll,ll> hash_table;
	for (ll i=0;i<N;i++)
	{
		cin>>arr[i].A>>arr[i].B;
		ll max;
		if (arr[i].A>arr[i].B)
			max=arr[i].A;
		else
			max=arr[i].B;
		ll C;
		C=4*arr[i].A*arr[i].B+2*max;
		rhs[i]=C;
		// ll result;
		// result=solve_equation(C);
		// if (result!=-1)
		// {
		// 	if (hash_table.find(result)==hash_table.end())
		// 	{
		// 		//cout<<"entering initial if"<<endl;
		// 		hash_table.insert(pair <ll,ll> (result,1));
		// 	}
		// 	else
		// 	{
		// 		ll temp;
		// 		temp=(hash_table.find(result))->second;
		// 		//cout<<temp<<endl;
		// 		temp++;
		// 		hash_table.erase(result);
		// 		hash_table.insert(pair <ll,ll> (result,temp));
		// 	}
		// }
	}
	//map <ll,ll>::iterator it;
	// for (it=hash_table.begin();it!=hash_table.end();it++)
	// {
	// 	cout<<it->first<<" "<<it->second;
	// 	cout<<endl;
	// }
	ll M=pow(10,9)+9;
	ll k_arr[Q+1];
	for (ll i=0;i<Q;i++)
		cin>>k_arr[i];
	for (ll i=0;i<N;i++)
	{
		ll temp;
		temp=rhs[i];
		if (hash_table.find(temp)==hash_table.end())
			hash_table.insert(pair <ll,ll> (temp,1));
		else
		{
			ll value;
			value=hash_table.find(temp)->second;
			value++;
			hash_table.erase(temp);
			hash_table.insert(pair <ll,ll> (temp,value));
		}
	}
	for (ll i=0;i<Q;i++)
	{
		ll k;
		k=k_arr[i];
		ll key;
		key=k*(k+1);
		if (hash_table.find(key)==hash_table.end())
			cout<<-1<<endl;
		else
		{
			ll temp;
			temp=hash_table.find(key)->second;
			ll result;
			result=modular_exp(temp%M,M-2,M);
			cout<<result<<endl;
		}
	}

}