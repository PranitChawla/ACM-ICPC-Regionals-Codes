#include <bits/stdc++.h>
#include <tuple>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m,s,f;
	cin>>n>>m>>s>>f;
	ll current=s;
	string s1;
	ll time=1;
	tuple <ll,ll,ll> t[m];
	for (int i=0;i<m;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		t[i]=make_tuple(a,b,c);
	}
	ll cnt=0;
		while (1)
		{
		ll q,l,r;
		// cin>>t>>l>>r;
		q=get<0>(t[cnt]);
		l=get<1>(t[cnt]);
		r=get<2>(t[cnt]);
		if (q==time)
		{
			if (current>=l&&current<=r)
			{
				s1.push_back('X');
			}	
			else if (f>current)
			{
				ll next=current+1;
				if (next>=l&&next<=r)
				{
					s1.push_back('X');
				}
				else
				{
					s1.push_back('R');
					current++;
				}	
			}
			else 
			{
				ll next=current-1;
				if (next>=l&&next<=r)
				{
					s1.push_back('X');
				}
				else
				{
					s1.push_back('L');
					current--;
				}
			}
			cnt++;
			time++;
		}
		else 
		{
			if (f>current)
			{
				s1.push_back('R');
				current++;
			}
			else 
			{
				s1.push_back('L');
				current--;
			}
			time++;
		}
		if (current==f)
			break;
	}
	cout<<s1;
}