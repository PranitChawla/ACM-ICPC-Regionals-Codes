#include "bits/stdc++.h"
using namespace std;

#define ll long long 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,sum1=0,sum2=0,flag=0;
	vector<char> v;
	cin>>n;
	ll a,b;
	while(n)
	{
		cin>>a>>b;
		if(a<b)	v.push_back('A'),sum1+=a;
		else v.push_back('G'),sum2+=b;
		break;
	}
	--n;
	while(n--)
	{
		cin>>a>>b;
		if(abs(sum1+a-sum2)<=500)
		{
			v.push_back('A');
			sum1+=a;
		}
		else if(abs(sum1-(sum2+b))<=500)
		{
			v.push_back('G');
			sum2+=b;
		}
		else
		{
			flag=1;
		}

	}
	if(flag==1)
	{
		cout<<-1;
	}
	else
	{
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
	}
}