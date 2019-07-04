#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	if (s[0]=='@'||s[s.length()-1]=='@')
		cout<<"No solution";
	else
	{
		for (int i=0;i<s.length()-1;i++)
		{
			if (i>0)
			{
			if (s[i+1]=='@'&&s[i-1]=='@')
			{
				cout<<"No solution";
				return 0;
			}
			}
			if (s[i]=='@')
			{
				if (s[i+1]=='@')
				{
				cout<<"No solution";
				return 0;
				}
			}
		}
				int k=0;
				int count=0;
				for (int i=0;i<s.length();i++)
				{
					if (s[i]=='@')
						count++;
				}
				int c=0;
				if (count==0)
				{
					cout<<"No solution";
					return 0;	
				}
				for (int i=0;i<s.length();i++)
				{
					while (s[i+1]!='@')
						i++;
					for (int j=k;j<=i;j++)
						cout<<s[j];
					k=i+3;
					cout<<"@";
					if (c<count-1)
					{
					cout<<s[i+2]<<",";
					c++;
					}
					else
					{
						for (int j=i+2;j<s.length();j++)
							cout<<s[j];
						break;
					}
				}
			}
		}