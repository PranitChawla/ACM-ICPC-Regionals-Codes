#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n4=0;
	int n7=0;
	string::iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it=='4')
			n4++;
		if (*it=='7')
			n7++;
	}
	if (n4>n7)
		cout<<4;
	else if (n7>n4)
		cout<<7;
	else if (n4==n7)
	{
		if (n4!=0)
			cout<<4;
		else
			cout<<-1;
	}
}