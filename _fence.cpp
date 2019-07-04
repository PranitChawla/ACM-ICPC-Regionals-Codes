#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	int digit;
	ll paint;
}point;
bool compare (point a,point b)
{
	if (a.paint!=b.paint)
		return a.paint<b.paint;
	else
		return a.digit>b.digit;
}
int main()
{
	ll n;
	cin>>n;
	point arr[10];
	vector < pair <int,ll> > list;
	for (int i=1;i<=9;i++)
	{
		arr[i].digit=i;
		ll temp;
		cin>>temp;
		arr[i].paint=temp;
	}
	sort(arr+1,arr+10,compare);
	ll sum=0;
	ll i=1;
	while (sum<=n)
	{
		sum+=(n/(arr[i].paint));
		if (sum>n)
		{
			flag=1;
			break;
		}
		else
		{
			list.push_back(make_pair(arr[i].digit,n/(arr[i].paint)));
		}
		i++;
	}	
	if (list.size()==0)
		cout<<-1;
}