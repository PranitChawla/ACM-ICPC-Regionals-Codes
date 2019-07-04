#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{	
	vector < pair <int,int> > list;
	vector <int> scores;
	vector <int> numbers;
}substask;
bool compare1 (pair <int,int> a, pair <int,int> b)
{
	return (a.first<b.first);
}
bool compare2 (pair <int,int> a, pair <int,int> b)
{
	if (a.first!=b.first)
	{
		return (a.first<b.first);
	}
	else
	{
		return (a.second<b.second);
	}
}
int main()
{
	ll P;
	int S;
	cin>>P>>S;
	vector <  pair <int,int> > diffeculty;
	substask arr[P];
	//int count=0;
	for (ll i=1;i<=2*P;i++)
	{
		if (i%2==1)
		{
			for (int j=0;j<S;j++)
			{
			int temp;
			cin>>temp;
			arr[(i+1)/2].scores.push_back(temp);
			}
		}
		else
		{	
			for (int j=0;j<S;j++)
			{
			int temp;
			cin>>temp;
			arr[i/2].numbers.push_back(temp);
			}
		}
	}
	vector < pair <int,int> >::iterator it3;
	for (ll i=1;i<=P;i++)
	{
		vector <int>::iterator it;
		vector <int>::iterator it2;
		for (it=arr[i].scores.begin(),it2=arr[i].numbers.begin();it!=arr[i].scores.end(),it2!=arr[i].numbers.end();it++,it2++)
			arr[i].list.push_back(make_pair(*it,*it2));
		sort(arr[i].list.begin(),arr[i].list.end(),compare1);
		ll count=0;
		for (it3=arr[i].list.begin();it3!=arr[i].list.end()-1;it3++)
		{
			pair <int,int> a,b;
			a=*it3;
			b=*(it3+1);
			if (a.second>b.second)
			{	
				count++;
			}
		}
		diffeculty.push_back(make_pair(count,i));
	}
	sort(diffeculty.begin(),diffeculty.end(),compare2);
	for (it3=diffeculty.begin();it3!=diffeculty.end();it3++)
	{
		pair <int,int> a1;
		a1=*it3;	
		cout<<a1.second<<endl;
	}
}