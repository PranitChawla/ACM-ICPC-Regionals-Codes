#include <bits/stdc++.h>
using namespace std;
int a[27];
bool palindrome (string s)
{
	for (int i=1;i<=26;i++)
		a[i]=0;
	string::iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it>='a'&&*it<='z')
			a[*it-96]++;
	}
	int count_even=0;
	int count_odd=0;
	for (int i=1;i<=26;i++)
	{
		if (a[i]!=0)
		{
		if (a[i]%2==0)
			count_even++;
		else
			count_odd++;
		}
	}
	//cout<<count_even<<" "<<count_odd;
	int n=0;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it!='*')
			n++;

	}	
	if (n%2==0)
	{
		if (count_odd==0)
			return true;
	}
	else
	{	if (count_odd==1)
			return true;
	}
	return false;
}
int main()
{
	string s;
	cin>>s;
	int count=0;
	//cout<<palindrome(s);
	while (!palindrome(s))
	{
		string::iterator it;
		if (s.length()==2)
		{
			count++;
			break;
		}
		for (it=s.begin();it!=s.end();it++)
		{
			char prev=*it;
			*it='*';
			//cout<<s<<endl;
			if (!palindrome(s))
			{
				//cout<<"check"<<endl;
				count++;
				string temp;
				for (it=s.begin();it!=s.end();it++)
				{
					if (*it!='*')
						temp.push_back(*it);
				}
				s=temp;
				break;
			}
			else
			{
				*it=prev;
				//break;
			}
			//cout<<s<<endl;
		}
	}
	if (count%2==0)
		cout<<"First";
	else
		cout<<"Second";
}