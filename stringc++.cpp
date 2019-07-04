#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string s2;
	getline(cin,s);
	s2="the string to check functions";
	cout<<"the string initially is "<<s<<endl;
	s.push_back('a');
	cout<<"the appended string is "<<s<<endl;
	s.pop_back();
	cout<<"after popping the string is"<<s<<endl;
	cout<<"the capacity of s is "<<s.capacity()<<endl;
	s.shrink_to_fit();
	cout<<"the new size of s is "<<s.capacity()<<endl;
	string::iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}
	char *array;
	array=new char[40];
	s2.copy(array,40,0);
	cout<<array<<endl;
	s.swap(s2);
	cout<<s<<endl;
	cout<<s2<<endl;
}