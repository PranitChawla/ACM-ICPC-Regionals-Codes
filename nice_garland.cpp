#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
   	string s;
   	cin>>s;
   	ll c1=0;
   	ll c2=0;
   	ll c3=0;
   	ll c4=0;
   	ll c5=0;
   	ll c6=0;
   	string p[7];
   	for (ll i=1;i<=6;i++)
   		p[i]=string(s);
   	ll mi=INT_MAX;
   	for (ll i=0;i<n;i++)
   	{
   		if (i%3==0)
   		{
   			if (s[i]!='R')
   			{
   				c1++;
   				p[1][i]='R';
   			}
   		}
   		else if (i%3==1)
   		{
   			if (s[i]!='G')
   			{
   				c1++;
   				p[1][i]='G';
   			}
   		}
   		else if (i%3==2)
   		{
   			if (s[i]!='B')
   			{
   				c1++;
   				p[1][i]='B';
   			}
   		}
   	}
   	mi=min(mi,c1);
   	for (ll i=0;i<n;i++)
   	{
   		if (i%3==0)
   		{
   			if (s[i]!='R')
   			{
   				c2++;
   				p[2][i]='R';
   			}
   		}
   		else if (i%3==1)
   		{
   			if (s[i]!='B')
   			{
   				c2++;
   				p[2][i]='B';
   			}
   		}
   		else if (i%3==2)
   		{
   			if (s[i]!='G')
   			{
   				c2++;
   				p[2][i]='G';
   			}
   		}
   	}
   	mi=min(mi,c2);
   	for (ll i=0;i<n;i++)
   	{
   		if (i%3==0)
   		{
   			if (s[i]!='B')
   			{
   				c3++;
   				p[3][i]='B';
   			}
   		}
   		else if (i%3==1)
   		{
   			if (s[i]!='G')
   			{
   				c3++;
   				p[3][i]='G';
   			}
   		}
   		else if (i%3==2)
   		{
   			if (s[i]!='R')
   			{
   				c3++;
   				p[3][i]='R';
   			}
   		}
   	}
   	mi=min(mi,c3);
   	for (ll i=0;i<n;i++)
   	{
   		if (i%3==0)
   		{
   			if (s[i]!='B')
   			{
   				c4++;
   				p[4][i]='B';
   			}
   		}
   		else if (i%3==1)
   		{
   			if (s[i]!='R')
   			{
   				c4++;
   				p[4][i]='R';
   			}
   		}
   		else if (i%3==2)
   		{
   			if (s[i]!='G')
   			{
   				c4++;
   				p[4][i]='G';
   			}
   		}
   	}
   	mi=min(mi,c4);
   	for (ll i=0;i<n;i++)
   	{
   		if (i%3==0)
   		{
   			if (s[i]!='G')
   			{
   				c5++;
   				p[5][i]='G';
   			}
   		}
   		else if (i%3==1)
   		{
   			if (s[i]!='B')
   			{
   				c5++;
   				p[5][i]='B';
   			}
   		}
   		else if (i%3==2)
   		{
   			if (s[i]!='R')
   			{
   				c5++;
   				p[5][i]='R';
   			}
   		}
   	}
   	mi=min(mi,c5);
   	for (ll i=0;i<n;i++)
   	{
   		if (i%3==0)
   		{
   			if (s[i]!='G')
   			{
   				c6++;
   				p[6][i]='G';
   			}
   		}
   		else if (i%3==1)
   		{
   			if (s[i]!='R')
   			{
   				c6++;
   				p[6][i]='R';
   			}
   		}
   		else if (i%3==2)
   		{
   			if (s[i]!='B')
   			{
   				c6++;
   				p[6][i]='B';
   			}
   		}
   	}
   	mi=min(mi,c6);
   	cout<<mi<<endl;
   	if (mi==c1)
   		cout<<p[1];
   	else if (mi==c2)
   		cout<<p[2];
   	else if (mi==c3)
   		cout<<p[3];
   	else if (mi==c4)
   		cout<<p[4];
   	else if (mi==c5)
   		cout<<p[5];
   	else if (mi==c6)
   		cout<<p[6];
}