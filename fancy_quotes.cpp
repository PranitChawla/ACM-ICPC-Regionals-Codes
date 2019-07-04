#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		string s4("not");
		string s;
		cin>>s;
		string s5(s);
		getline(cin,s);
		string s2("not ");
		if (s5.compare(s4)==0)
		{
			cout<<"Real Fancy"<<endl;	
			continue;	
		}
		if (s.find(s2)!=string::npos)
		{
			cout<<"Real Fancy"<<endl;
		}
		
		else
		{
			string s3(s.end()-3,s.end());
			if (s3.compare(s4)==0)
				cout<<"Real Fancy"<<endl;
			else
				cout<<"regularly fancy"<<endl;
		}
	}
}