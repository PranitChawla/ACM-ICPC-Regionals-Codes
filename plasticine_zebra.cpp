#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	string::iterator it;
	ll init=1;
	ll max_init=-1;
	int flag=0;
	for (it=s.begin();it!=s.end()-1;it++)
	{
		if (*it!=*(it+1))
			{
				flag=1;
				init++;
			}
			if (init>max_init)
			{
				max_init=init;
				init=0;
			}
			
	}
	//cout<<max_init;
	if (flag==1)
	max_init++;
	cout<<max_init;
	flag=0;
	ll start=0;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it==*(it+1))
			break;
		else
		{
			start++;
			flag=1;
		}
	}
	if (flag==1)
	start++;
	//cout<<start<<endl;
	ll end=0;
	flag=0;
	for (it=s.end()-1;it>s.begin();it--)
	{
		if (*it==*(it-1))
			break;
		else
		{
			flag=1;
			end++;
		}
	}
	if (flag==1)
	end++;
	if (start+end>max_init&&(*s.begin()!=*(s.end()-1)))
		{
			//cout<<"y";
			cout<<start+end;
		}
	else
		cout<<max_init;
}