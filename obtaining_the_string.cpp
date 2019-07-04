#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	string s_temp,t_temp;
	s_temp=s;
	t_temp=t;
	sort(s_temp.begin(),s_temp.end());
	sort(t_temp.begin(),t_temp.end());
	if (s_temp.compare(t_temp)!=0)
		cout<<-1<<endl;
	else if (s.compare(t)==0)
			cout<<0<<endl;
	else
	{
		int size=pow(10,4)+5;
		int arr[size];
		int count=0;
		int i=0;
		while (s.compare(t)!=0&&count<=pow(10,4))
		{
			string::iterator it;
			string::iterator it1;
			string::iterator it2;
			int temp=1;
			for (it=s.begin(),it1=t.begin();it!=s.end(),it1!=t.end();it++,it1++,temp++)
			{
				if (*it==*it1)
					continue;
				else
				{
					it2=it+1;
					temp++;
					while (*it2!=*it1&&it2!=s.end())
					{
						it2++;
						temp++;
					}
					char c;
					c=*(it2-1);
					*(it2-1)=*it2;
					*it2=c;
					arr[i]=it2-s.begin();
					count++;
					i++;
					break;
				}
			}
		}
		cout<<count<<endl;
		for (int i=0;i<count;i++)
			cout<<arr[i]<<" ";
	}
}