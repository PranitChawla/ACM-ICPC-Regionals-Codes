#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	int digit;
	ll paint;
}point;
ll n;
bool compare (point a,point b)
{
	if (a.paint!=b.paint)
		return (n/a.paint)>(n/b.paint);
	else
		return a.digit>b.digit;
}
bool compare2 ( pair <int,ll> a, pair <int,ll> b)
{
	return a.first>b.first;
}
int main()
{
	cin>>n;
	point arr[10];
	point t[10];
	vector <int> list;
	ll min;
	for (int i=1;i<=9;i++)
	{
		arr[i].digit=i;
		t[i].digit=i;
		ll temp;
		cin>>temp;
		arr[i].paint=temp;
		t[i].paint=temp;
		if (i==1)
			min=arr[1].paint;
		else
		{
			if (arr[i].paint<min)
				min=arr[i].paint;
		}
	}
	sort(arr+1,arr+10,compare);
	ll sum=0;
	ll comp=n;
	ll i=1;
	if (min>n)
		cout<<-1;
	else
	{
		ll len=n/(arr[1].paint);
		ll sum_left=n-len*arr[1].paint;
		for (ll i=0;i<len;i++)
			list.push_back(arr[1].digit);
		//cout<<s;
		vector <int>::iterator it;
		int i;
		for (it=list.begin();it!=list.end();it++)
		{
			int flag=0;
			for (i=9;i>=1;i--)
			{
				if (t[i].paint-t[arr[1].digit].paint<=sum_left)
					{
						flag=1;
						break;
					}
			}
			if (flag==1)
			{
			sum_left-=(t[i].paint-t[arr[1].digit].paint);
			*it=t[i].digit;
			}
		}
		for (it=list.begin();it!=list.end();it++)
			cout<<*it;
	}
}