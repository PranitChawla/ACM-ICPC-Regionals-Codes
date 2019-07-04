#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	int power;
	ll key;
}point;
int main()
{
	ll N;
	int X;
	cin>>N>>X;
	point A[N+1];
	queue <point> list;
	for (ll i=1;i<=N;i++)
	{
		int temp;
		cin>>temp;
		point p;
		p.power=temp;
		p.key=i;
		list.push(p);
	}
	for (int i=0;i<X;i++)
	{
		//cout<<i<<endl;
		point max=list.front();
		//cout<<list.size()<<endl;
		//cout<<max.power<<endl;
		int max1=max.power;
		int max2=max.key;
		queue <point> list_temp;
		if (list.size()>=X)
		{
			for (int j=0;j<X;j++)
			{
				int temp1;
				ll temp2;
				temp1=list.front().power;
				temp2=list.front().key;
				point temp;
				temp.power=temp1;
				temp.key=temp2;
				list_temp.push(temp);
				list.pop();
				if (temp1>max.power)
					{
						point max_temp;
						max_temp.power=temp1;
						max_temp.key=temp2;
						max=max_temp;
					}
			}
			while (list_temp.size()>0)
			{
				point temp;
				temp=list_temp.front();
				int temp1;
				ll temp2;
				temp1=temp.power;
				temp2=temp.key;
				if (temp2!=max.key)
				{
					if (temp1>0)
						temp1--;
					point temp3;
					temp3.power=temp1;
					temp3.key=temp2;
					list.push(temp3);
					list_temp.pop();
				}
				else 
					list_temp.pop();
			}
			if (i!=X-1)
			cout<<max.key<<" ";
			else
			cout<<max.key;
		}
		else if (list.size()<X&&list.size()>0)
		{
			while (list.size()>0)
			{
				int temp1;
				ll temp2;
				temp1=list.front().power;
				temp2=list.front().key;
				point temp;
				temp.power=temp1;
				temp.key=temp2;
				list_temp.push(temp);
				list.pop();
				if (temp1>max.power)
					{
						point max_temp;
						max_temp.power=temp1;
						max_temp.key=temp2;
						max=max_temp;
					}
			}
			while (list_temp.size()>0)
			{
				point temp;
				temp=list_temp.front();
				int temp1;
				ll temp2;
				temp1=temp.power;
				temp2=temp.key;
				if (temp2!=max.key)
				{
					if (temp1>0)
						temp1--;
					point temp3;
					temp3.power=temp1;
					temp3.key=temp2;
					list.push(temp3);
					list_temp.pop();
				}
				else 
					list_temp.pop();
			}
			if (i!=X-1)
			cout<<max.key<<" ";
			else
			cout<<max.key;
}
}
}