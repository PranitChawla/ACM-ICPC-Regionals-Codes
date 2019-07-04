#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll right_one (ll a)
{
	return (a&-a);
}
int main()
{
	ll sum,limit;
	cin>>sum>>limit;
	vector <ll> p;
	for (ll i=limit;i>=1&&sum!=0;i--)
	{
		ll temp;
		temp=right_one(i);
		if (sum-temp<0)
			continue;
		sum-=temp;
		p.push_back(i);
	}
	if (sum>0)
		cout<<-1;
	else
	{
		cout<<p.size()<<endl;
		vector <ll>::iterator it;
		for (it=p.begin();it!=p.end();it++)
			cout<<*it<<" ";
	}
}