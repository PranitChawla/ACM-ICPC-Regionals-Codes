#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	 int a,b,c;
}event;
bool compare (event p,event q)
{
	int sum1=p.b+p.c;
	int sum2=q.b+q.c;
	return (sum1>sum2);
}
int main()
{
	ll N;
	cin>>N;
	event arr[N];
	for (ll i=0;i<N;i++)
	{
		cin>>arr[i].a;
		cin>>arr[i].b;
		cin>>arr[i].c;
	}
	sort(arr,arr+N,compare);
	//ll time=0;
	ll sum_a=0;
	ll sum_total=0;
	ll max;
	for (ll i=0;i<N;i++)
	{
		sum_total=0;
		sum_a+=arr[i].a;
		sum_total+=sum_a+arr[i].b+arr[i].c;
		//cout<<sum_total<<endl;
		if (i==0)
			max=sum_total;
		else
		{
			if (sum_total>max)
				max=sum_total;
		}
	}
	cout<<max;
}
