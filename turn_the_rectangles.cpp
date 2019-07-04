#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll N;
	cin>>N;
	ll w,h;
	ll wn,hn;
	cin>>w>>h;
	ll max;
	if (w>h)
		max=w;
	else 
		max=h;
	h=max;
	ll h1[N+1];
	ll w1[N+1];
	for (ll i=1;i<N;i++)
	{
		cin>>h1[i]>>w1[i];
	}
	for (ll i=1;i<N;i++)
	{
		ll temp;
		hn=h1[i];
		wn=w1[i];
		if (wn>hn)
			temp=wn;
		else 
			temp=hn;
		if (temp<=h)
			h=temp;
		else if (wn<=h)
			h=wn;
		else if (hn<=h)
			h=hn;
		else
		{
			cout<<"NO"<<endl;
			exit(0);
		}
	}
	cout<<"YES"<<endl;
}