#include <bits/stdc++.h>
using namespace std;
bool is_vowel (char a)
{
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		return true;
	return false;
}
int main()
{
	string s;
	cin>>s;
	string::iterator it;
	int flag=0;
	for (it=s.begin();it!=s.end();it++)
	{
		if (!is_vowel(*it)&&*it!='n')
		{
			if (!(is_vowel(*(it+1))))
			{
				flag=1;
				cout<<"NO"<<endl;
				break;
			}
		}
	}
	if (flag==0)
		cout<<"YES"<<endl;
}