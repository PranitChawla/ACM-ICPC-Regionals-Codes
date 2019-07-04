#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll z=0;
	ll o=0;
	ll t=0;
	ll op=n/3;
	for (ll i=0;i<n;i++)
	{
		if (s[i]=='0')
			z++;
		else if (s[i]=='1')
			o++;
		else if (s[i]=='2')
			t++;
	}
	if (z==op&&o==op&&t==op)
		cout<<s;
	else if (z==op)
	{
		if (t>o)
		{
			ll ex2=t-op;
			for (ll i=0;i<n;i++)
			{
				if (ex2)
				{
					if (s[i]=='2')
					{
						s[i]='1';
						ex2--;
					}
				}
			}
		}
		else
		{
			ll ex1=o-op;
			for (ll i=n-1;i>=0;i--)
			{
				if (ex1)
				{
					if (s[i]=='1')
					{
						s[i]='2';
						ex1--;
					}
				}
			}
		}
		cout<<s;
	}
	else if (o==op)
	{
		if (t>z)
		{
			ll ex2=t-op;
			for (ll i=0;i<n;i++)
			{
				if (ex2)
				{
					if (s[i]=='2')
					{
						s[i]='0';
						ex2--;
					}
				}
			}
		}
		else
		{
			ll ex0=z-op;
			for (ll i=n-1;i>=0;i--)
			{
				if (ex0)
				{
					if (s[i]=='0')
					{
						s[i]='2';
						ex0--;
					}
				}
			}
		}	
	cout<<s;
	}
	else if (t==op)
	{
		if (o>z)
		{
			ll ex1=o-op;
			for (ll i=0;i<n;i++)
			{
				if (ex1)
				{
					if (s[i]=='1')
					{
						s[i]='0';
						ex1--;
					}
				}
			}
		}
		else
		{
			ll ex0=z-op;
			for (ll i=n-1;i>=0;i--)
			{
				if (ex0)
				{
					if (s[i]=='0')
					{
						s[i]='1';
						ex0--;
					}
				}
			}

		}
		cout<<s;
	}
	else if (t>op&&z<op&&o<op)
	{
		ll l0=op-z;
		ll l1=op-o;
		for (ll i=0;i<n;i++)
		{
			if (l0)
			{
			if (s[i]=='2')
			{
				s[i]='0';
				l0--;
			}
			}
		}
		for (ll i=0;i<n;i++)
		{
			if (l1)
			{
			if (s[i]=='2')
			{
				s[i]='1';
				l1--;
			}
			}
		}
		cout<<s;
	} 
	else if (o>op&&t<op&&z<op)
	{
		ll l0=op-z;
		ll l2=op-t;
		for (ll i=0;i<n;i++)
		{
			if (l0)
			{
			if (s[i]=='1')
			{
				s[i]='0';
				l0--;
			}
			}
		}
		for (ll i=n-1;i>=0;i--)
		{
			if (l2)
			{
			if (s[i]=='1')
			{
				s[i]='2';
				l2--;
			}
			}
		}
		cout<<s;
	}
	else if (z>op&&t<op&&o<op)
	{
		ll l1=op-o;
		ll l2=op-t;
		for (ll i=n-1;i>=0;i--)
		{
			if (l2)
			{
			if (s[i]=='0')
			{
				s[i]='2';
				l2--;
			}
			}
		}
		for (ll i=n-1;i>=0;i--)
		{
			if (l1)
			{
			if (s[i]=='0')
			{
				s[i]='1';
				l1--;
			}
			}
		}
		cout<<s;
	}
	else if (z>op&&o>op&&t<op)
	{
		ll ex1=o-op;
		ll ex0=z-op;
		for (ll i=n-1;i>=0;i--)
		{
			if (ex0)
			{
			if (s[i]=='0')
			{
				s[i]='2';
				ex0--;
			}
			}
		}
		for (ll i=n-1;i>=0;i--)
		{
			if (ex1)
			{
			if (s[i]=='1')
			{
				s[i]='2';
				ex1--;
			}
			}
		}
		cout<<s;
	}
	else if (t>op&&o>op&&z<op)
	{
		ll ex1=o-op;
		ll ex2=t-op;
		for (ll i=0;i<n;i++)
		{
			if (ex1)
			{
			if (s[i]=='1')
			{
				s[i]='0';
				ex1--;
			}
			}
		}
		for (ll i=0;i<n;i++)
		{
			if (ex2)
			{
			if (s[i]=='2')
			{
				s[i]='0';
				ex2--;
			}
			}
		}
		cout<<s;
	}
	else if (t>op&&z>op&&o<op)
	{
		ll ex0=z-op;
		ll ex2=t-op;
		for (ll i=0;i<n;i++)
		{
			if (ex2)
			{
			if (s[i]=='2')
			{
				s[i]='1';
				ex2--;
			}
			}
		}
		for (ll i=n-1;i>=0;i--)
		{
			if (ex0)
			{
			if (s[i]=='0')
			{
				s[i]='1';
				ex0--;
			}
			}
		}
		cout<<s;
	}


}