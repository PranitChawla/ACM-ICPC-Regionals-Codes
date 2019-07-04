#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
static const size_t npos = -1;
int main()
{
	string s,t;
	cin>>s>>t;
	string s_sort,t_sort;
		s_sort=s;
		t_sort=t;
		sort(s_sort.begin(),s_sort.end());
		sort(t_sort.begin(),t_sort.end());
		//cout<<'a'-96;
	if (s.length()==t.length())
	{
		if (s_sort.compare(t_sort)==0)
			cout<<"array";
		else
			cout<<"need tree";
	}
	else
	{
		string::iterator it=s.begin();
		string::iterator it2=t.begin();
		string temp;
		int count=0;
		while (it!=s.end()&&it2!=t.end())
		{
			if (*it==*it2)
			{
				temp.push_back(*it2);
				it++;
				it2++;
				count++;
			}
			else
				it++;
		}	
		if (count==t.length())
			cout<<"automaton";
		else
		{
			int freq_s[27];
			int freq_t[27];
			for (int i=1;i<=27;i++)
			{
				freq_s[i]=0;
				freq_t[i]=0;
			}
			for (it=s.begin();it!=s.end();it++)
			{
				int t=*it-96;
				freq_s[t]++;
			}
			for (it=t.begin();it!=t.end();it++)
			{
				int t=*it-96;
				freq_t[t]++;
			}
			int flag=0;
			for (int i=1;i<=26;i++)
			{
				if (freq_s[i]<freq_t[i])
				{
					flag=1;
					break;
				}
			}
			if (flag==1)
				cout<<"need tree";
			else
				cout<<"both";
		}
	}
}