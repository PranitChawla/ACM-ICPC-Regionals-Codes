#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll s,k;
	cin>>s>>k;
	ll fib[1000];
	memset(fib,0,sizeof(fib));
	ll count=0;
	if (k<=32)
	{
		for (ll i=1;i<k;i++)
		{
			fib[i]=0;
		}
		fib[k]=1;
		for (ll i=k+1;i<=60;i++)
		{
			for (ll j=1;j<=k;j++)
				fib[i]+=fib[i-j];
		}
		// for (ll i=1;i<=60;i++)
		// 	cout<<fib[i]<<" ";
			ll i;
			for (i=1;i<=60;i++)
			{
				if (fib[i]>s)
					break;
			}
			//ll count=0;
			vector <ll> list;
			ll sum=0;
			for (ll j=i-1;j>=1;j--)
			{
				if (sum+fib[j]>s)
					continue;
				sum+=fib[j];
				list.push_back(fib[j]);
				//count++;
				//cout<<sum<<endl;
				if (sum==s)
					break;
			}
			vector <ll>::iterator it;
			if (list.size()==1)
			{
				cout<<list.size()+1<<endl;
				cout<<*list.begin()<<" "<<0;
			}
			else
			{
			cout<<list.size()<<endl;
			for (it=list.begin();it!=list.end();it++)
				cout<<*it<<" ";
			}
	}
	else
	{
		// fib[k]=1;
		count=0;
		ll j=1;
		ll t=0;
		while (1)
		{
			if (pow(2,t)<=pow(10,9))
			{
				ll p;
				p=pow(2,t);
				fib[j]=p;
				t++;
				j++;
				count++;
			}
			else
				break;
		}	
			ll i;
			//ll count=0;
			vector <ll> list;
			ll sum=0;
			for (ll j=count;j>=1;j--)
			{
				if (sum+fib[j]>s)
					continue;
				sum+=fib[j];
				//cout<<sum<<endl;
				list.push_back(fib[j]);
				//count++;
				if (sum==s)
					break;
			}
			vector <ll>::iterator it;
			if (list.size()==1)
			{
				cout<<list.size()+1<<endl;
				cout<<*list.begin()<<" "<<0;
			}
			else
			{
			cout<<list.size()<<endl;
			for (it=list.begin();it!=list.end();it++)
				cout<<*it<<" ";
			}
			// for (ll i=1;i<=count;i++)
			// 	cout<<fib[i]<<" ";
	}
}