#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll N;
	cin>>N;
	// ll books[N];
	// ll shelves[N];
	priority_queue <ll> books;
	priority_queue <ll> shelves;
	for (ll i=0;i<N;i++)
	{
		ll a;
		cin>>a;
		books.push(a);
	}
	for (ll i=0;i<N;i++)
	{
		ll a;
		cin>>a;
		shelves.push(a);
	}
	// sort(books,books+N);
	// sort(shelves,shelves+N);
	ll sum=0;
	while (!books.empty())
	{
		sum+=abs(books.top()-shelves.top());
		books.pop();
		shelves.pop();
	}
	cout<<sum;
}