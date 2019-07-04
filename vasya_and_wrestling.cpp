#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	vector <ll> first;
	vector <ll> second;
	ll n;
	cin>>n;
	int last;
	for (int i=0;i<n;i++)
	{
		ll temp;
		cin>>temp;
		if (temp>0)
			first.push_back(temp);
		else
			second.push_back(-1*temp);
		if (i==n-1)
		{
			if (temp>0)
				last=1;
			else
				last=2;
		}
	}
	ll sum1=0;
	ll sum2=0;
	vector <ll>::iterator it;
	vector <ll>::iterator it2;
	for (it=first.begin();it!=first.end();it++)
		sum1+=*it;
	for (it=second.begin();it!=second.end();it++)
		sum2+=*it;
	if (sum1>sum2)
		cout<<"first";
	else if (sum2>sum1)
		cout<<"second";
	else
	{
		int flag=0;
		for (it=first.begin(),it2=second.begin();it!=first.end(),it2!=second.end();it++,it2++)
		{
			if (*it>*it2)
			{
				flag=1;
				break;
			}
			else if (*it2>*it)
			{
				flag=2;
				break;
			}
		}
		if (flag==0)
		{
			if (last==1)
				cout<<"first";
			else
				cout<<"second";
		}
		else if (flag==1)
			cout<<"first";
		else
			cout<<"second";
	}
}	