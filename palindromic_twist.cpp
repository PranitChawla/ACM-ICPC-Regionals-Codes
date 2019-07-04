#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string::iterator it,mid,it2;
		it=s.begin();
		mid=it+n/2;
		for (it=s.begin();it!=s.end();it++)
		{
			if (*it=='a')
				*it=='b';
			if (*it=='z')
				*it=='y';
		}
		it2=s.end()-1;
		it=s.begin();
		int flag=0;
		while (it<=mid&&it2>=mid)
		{
			int a=(int)*it;
			int b=(int)*it2;
			if (a-1==b-1||a-1==b+1||a+1==b-1||a+1==b+1)
			{
				it++;
				it2--;
				continue;
			}
			else
			{
				flag=1;
				break;
			}
		}
		//}
		if (flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}