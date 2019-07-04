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
   	string p;
   	p=string(s);
   	if (n==1)
   	{
   		cout<<0<<endl;
   		cout<<s<<endl;
   	}
   	else if (n==2)
   	{
   		if (p[0]==p[1])
   		{
   			cout<<1<<endl;
   			if (s[0]=='R')
   			{
   				s[0]='B';
   				cout<<s<<endl;
   			}
   			else if (s[0]=='B')
   			{
   				s[0]='G';
   				cout<<s<<endl;
   			}
   			else if (s[0]=='G')
   			{
   				s[0]='R';
   				cout<<s<<endl;
   			}
   		}
   		else 
   		{
   			cout<<0<<endl;
   			cout<<s<<endl;
   		}
   	}
   	else
   	{
   	for (ll i=0;i<n-2;i++)
   	{
   		if (s[i]==s[i+1])
   		{
   			if (s[i]==s[i+2])
   			{
   				if (s[i]=='G')
   					s[i+1]='R';
   				else if (s[i]=='B')
   					s[i+1]='G';
   				else if (s[i]=='R')
   					s[i+1]='B';
   			}
   			else
   			{
   				if (s[i]=='B')
   				{
   					if (s[i+2]=='G')
   						s[i+1]='R';
   					else if (s[i+2]=='R')
   						s[i+1]='G';
   				}
   				else if (s[i]=='R')
   				{
   					if (s[i+2]=='G')
   						s[i+1]='B';
   					else if (s[i+2]=='B')
   						s[i+1]='G';
   				}
   				else if (s[i]=='G')
   				{
   					if (s[i+2]=='R')
   						s[i+1]='B';
   					else if (s[i+2]=='B')
   						s[i+1]='R';
   				}
   			}
   		}
   	}
   if (s[n-2]==s[n-1])
   {
   		if (s[n-2]=='R')
   			s[n-1]='B';
   		else if (s[n-2]=='B')
   			s[n-1]='G';
   		else if (s[n-2]=='G')
   			s[n-1]='R';
   }
   ll c=0;
   for (ll i=0;i<n;i++)
   {
   		if (p[i]!=s[i])
   			c++;
   }
   cout<<c<<endl;
   cout<<s<<endl;
   }
 }