#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll x, ll y)
{
    ll temp=1;
    for (int i=1;i<=y;i++)
    	temp=temp*x;
    return temp;
}
int main()
{
	string s;
	cin>>s;
	string::iterator it,it2;
	for (it=s.begin();it!=s.end();it++)
	{
		if (*it==':')
			break;
	}
	vector <int> h,m;
	// char a='A';
	//cout<<(int)a;
	for (it2=s.begin();it2!=it;it2++)
	{
		if (((int)*it2)-48<=9)
			h.push_back((int)*it2-48);
		else
		{
			h.push_back((int)*it2-65+10);
		}
	}
	for (it2=it+1;it2!=s.end();it2++)
	{
		if (((int)*it2)-48<=9)
			m.push_back((int)*it2-48);
		else
		{
			m.push_back((int)*it2-65+10);
		}
	}
	vector <int>::iterator it1;
	int flag=0;
	//cout<<flag<<endl;
	for (it1=h.begin();it1<h.end()-1;it1++)
	{
		if (*it1!=0)
		{
			flag=1;
			break;
		}
	}
	//cout<<flag<<endl;
	if (flag==0)
	{
		for (it1=m.begin();it1<m.end()-1;it1++)
		{
		if (*it1!=0)
		{
			flag=1;
			break;
		}
		}
	//cout<<flag<<endl;
	if (flag==0)
	{
		if (*(h.end()-1)<=23&&*(m.end()-1)<=59)
		{
		cout<<-1;
		flag=0;
		}
		else
			flag=1;
	}
	}
	//cout<<flag<<endl;
	if (flag==1)
	{
		int count=0;
		for (int i=2;i<=59;i++)
		{
			int nh=0;
			int nm=0;
			int f=0;
			int c=0;
			//cout<<"check"<<endl;
			for (it1=h.end()-1;it1>=h.begin();it1--)
			{
				if (*it1<=i-1)
					nh+=(*it1)*power(i,c);
				else
				{
					f=1;
					break;
				}
				c++;
			}
			if (f==0&&nh<=23)
			{
				c=0;
				for (it1=m.end()-1;it1>=m.begin();it1--)
				{
				if (*it1<=i-1)
					nm+=(*it1)*power(i,c);
				else
				{
					f=1;
					break;
				}
				c++;
				}
				if (f==0&&nm<=59)
				{	
					count++;
					cout<<i<<" ";
				}
			}	
		}
		if (count==0)
			cout<<0;
	}
	}