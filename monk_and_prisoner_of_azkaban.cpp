#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	ll number;
	ll key;
}point;
int main()
{
	ll N;
	cin>>N;
	point arr[N+1];
	ll x_vals[N+1];
	ll y_vals[N+1];
	for (ll i=1;i<=N;i++)
	{
		cin>>arr[i].number;
		arr[i].key=i;
		x_vals[i]=-1;
		y_vals[i]=-1;
	}
	stack <point> s;
	s.push(arr[1]);
	for (ll i=2;i<=N;i++)
	{
		//cout<<s.size()<<" ";
		if (s.size()==0)
		{
			s.push(arr[i]);
			continue;
		}
		while ((arr[i].number>(s.top()).number))
			{
				y_vals[(s.top()).key]=i;
				s.pop();
				if (s.empty()==true)
					break;
			}
		s.push(arr[i]);
	} 
	stack <point> s2;
	s2.push(arr[N]);
	for (ll i=N-1;i>=1;i--)
	{
		if (s2.size()==0)
		{
			s2.push(arr[i]);
			continue;
		}
			while (arr[i].number>s2.top().number)
			{
				x_vals[s2.top().key]=i;
				s2.pop();
				if (s2.empty()==true)
					break;
			}
		s2.push(arr[i]);
	}
	for (ll i=1;i<=N;i++)
		cout<<y_vals[i]+x_vals[i]<<" ";
}