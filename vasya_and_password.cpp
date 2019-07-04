#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		int s1=0,l=0,d=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]>='a'&&s[i]<='z')
				s1++;
			else if (s[i]>='A'&&s[i]<='Z')
				l++;
			else
				d++;
		}
		if (s1>=1&&l>=1&&d>=1)
		{
			cout<<s<<endl;
			continue;
		}
		else if (s1==0&&l>=1&&d>=1)
		{
			if (l>=2)
			{
				for (int i=0;i<s.length();i++)
				{
					if (s[i]>='A'&&s[i]<='Z')
					{
						s[i]='a';
						break;
					}

				}
			}
			else
			{
				for (int i=0;i<s.length();i++)
				{
					if (s[i]>='0'&&s[i]<='9')
					{
						s[i]='a';
						break;
					}
				}
			}
		}
		else if (s1>=1&&l==0&&d>=1)
		{
			if (s1>=2)
			{
				for (int i=0;i<s.length();i++)
				{
					if (s[i]>='a'&&s[i]<='z')
					{
						s[i]='A';
						break;
					}
				}
			}
			else
			{
				for (int i=0;i<s.length();i++)
				{
					if (s[i]>='0'&&s[i]<='9')
					{
						s[i]='A';
						break;
					}
				}
			}
		}
		else if (s1>=1&&l>=1&&d==0)
		{
			if (s1>=2)
			{
				for (int i=0;i<s.length();i++)
				{
					if (s[i]>='a'&&s[i]<='z')
					{
						s[i]='0';
						break;
					}
				}
			}
			else
			{
				for (int i=0;i<s.length();i++)
				{
					if (s[i]>='A'&&s[i]<='Z')
					{
						s[i]='0';
						break;
					}
				}
			}
		}
		else if (s1==0&&l==0&&d>=1)
		{
			// if (s1>=2)
			// {
			// 	for (int i=0;i<s.length();i++)
			// 	{
			// 		if (s[i]>='a'&&s[i]<='z')
			// 			s[i]='0';
			// 	}
			// }
			// else
			// {
			// 	for (int i=0;i<s.length();i++)
			// 	{
			// 		if (s[i]>='A'&&s[i]<='Z')
			// 			s[i]='0';
			// 	}
			// }
			s[0]='A';
			s[1]='a';
		}
		else if (s1==0&&d==0&&l>=1)
		{
			s[0]='0';
			s[1]='a';
		}
		else
		{
			s[0]='0';
			s[1]='A';
		}
		cout<<s<<endl;
	}
}