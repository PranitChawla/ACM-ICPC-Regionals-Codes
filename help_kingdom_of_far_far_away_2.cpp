#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string::iterator it,dec;
	//string final;
	stack <char> p;
	int flag=0;
	int flag2=0;
	if (s[0]=='-')
	{
		s.erase(s.begin());
		flag=1;
	}
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it=='.')
		{
			dec=it;
			flag2=1;
			break;
		}

	}
	if (it==s.end())
		{
			s.push_back('.');
			dec=s.end()-1;
		}
		int count=0;
		it=dec-1;
		while (it>=s.begin())
		{
			if (count==3)
			{
				p.push(',');
				count=0;
				//it--;
			}
			else
			{
				p.push(*it);
				it--;
				count++;
			}
		}
		if (flag==0)
		{
			cout<<"$";
		}
		else
		{
			cout<<"($";
		}
		while (p.size()>0)
		{
			char a;
			a=p.top();
			cout<<a;
			p.pop();
		}
		cout<<".";
		int after=s.end()-1-dec;
		//cout<<after<<endl;
		if (after==1)
		{
			s.push_back('0');
			cout<<*(s.end()-2)<<*(s.end()-1);
		}
		else if (after==0)
		{
			s.push_back('0');
			s.push_back('0');
			cout<<*(s.end()-2)<<*(s.end()-1);
		}
		else
			cout<<*(dec+1)<<*(dec+2);
		if (flag==1)
			cout<<")";
	}
