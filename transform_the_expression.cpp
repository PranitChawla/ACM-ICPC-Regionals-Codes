#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;	
	for (int i=0;i<t;i++)
	{
	string str;
	cin>>str;
	string::iterator it;
	stack <char> S;
	for (it=str.begin();it!=str.end();it++)
	{
		if ((int)*it>=97&&(int)*it<=122)
			cout<<*it;
		if (*it==')')
		{
			S.pop();
			char c;
			c=S.top();
			cout<<c;
			S.pop();
			S.pop();
		}
		else 
			S.push(*it);
	}
	cout<<endl;
	}
}