#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	priority_queue <ll> q;
	q.push(a[1]);
	q.push(a[2]);
	// q.push(a[3]);
	cout<<-1<<endl<<-1<<endl;
	for (ll i=3;i<=n;i++)
	{
		q.push(a[i]);
		ll a1=q.top();
		q.pop();
		ll a2=q.top();
		q.pop();
		ll a3=q.top();
		q.pop();
		cout<<a1*a2*a3<<endl;
		q.push(a1);
		q.push(a2);
		q.push(a3);
	}
}