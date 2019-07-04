#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	ll a=0;
	ll b=0;
	ll c=0;
	ll d=0;
	for (ll i=0;i<n;i++)
	{
		if (s1[i]=='1'&&s2[i]=='1')
			c++;
		else if (s1[i]=='1'&&s2[i]=='0')
			a++;
		else if (s1[i]=='0'&&s2[i]=='1')
			b++;
		else
			d++;
	}
	ll t1,t2;
	ll f=0;
	ll d_ans;
	ll x,y,w,z;
	for (ll i=0;i<=n/2;i++)
	{
		for (ll j=0;j<=c;j++)
		{
			x=i-j;
			y=b+c-j-i;
			w=n/2-i-y;
			if (x>=0&&x<=a&&y>=0&&y<=b&&w>=0&&w<=d)
			{
				f=1;
				z=j;
				break;
			}
		}
		if (f)
			break;
	}
	//cout<<i<<" "<<t1<<" "<<t2<<" "<<d_ans<<endl;
	if (!f)
		cout<<-1;
	else
	{
		ll a_c=0;
		ll b_c=0;
		ll d_c=0;
		ll c_c=0;
		for (ll k=0;k<n;k++)
		{
			if (s1[k]=='1'&&s2[k]=='0')
			{
				if (b_c<x)
				{
					cout<<k+1<<" ";
					b_c++;
				}
			}
			else if (s1[k]=='1'&&s2[k]=='1')
			{
				if (d_c<z)
				{
					cout<<k+1<<" ";
					d_c++;
				}	
			}
			else if (s1[k]=='0'&&s2[k]=='0')
			{
				if (a_c<w)
				{
					cout<<k+1<<" ";
					a_c++;
				}
			}
			else 
			{
				if (c_c<y)
				{
					cout<<k+1<<" ";
					c_c++;
				}
			}
		}
	}
}