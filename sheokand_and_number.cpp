#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int count_ones (ll n)
{
	int count=0;
	while (n)
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	ll T;
	cin>>T;
	while (T--)
	{
		ll N;
		cin>>N;
		int x;
		x=int(log2(N));
		ll temp1;
		temp1=1<<x;
		ll temp=temp1;
		//cout<<temp1<<endl;
		ll temp2;
		temp2=1<<(x+1);
		ll min1,min2;
		for (int i=0;i<x;i++)
		{
		//	cout<<(1<<i)<<endl;
			temp1=temp1+(1<<i);
			//cout<<temp1<<endl;
			if (i==0)
				{
					if (temp1>N)
						min1=temp1-N;
					else
						min1=N-temp1;
					//cout<<min1<<endl;
					temp1=temp;
				}
			else 
			{
				if (abs(temp1-N)<min1)
					{
						if (temp1>N)
							min1=temp1-N;
						else
							min1=N-temp1;
					}
					//cout<<min1<<endl;
					temp1=temp;
			}
		}
		ll temp3=temp2;
		for (int i=0;i<x+1;i++)
		{
		//	cout<<(1<<i)<<endl;
			temp2=temp2+(1<<i);
			//cout<<temp1<<endl;
			if (i==0)
				{
					if (temp2>N)
						min2=temp2-N;
					else
						min2=N-temp2;
					//cout<<min1<<endl;
					temp2=temp3;
				}
			else 
			{
				if (abs(temp2-N)<min2)
					{
						if (temp2>N)
							min2=temp2-N;
						else
							min2=N-temp2;
					}
					//cout<<min1<<endl;
					temp2=temp3;
			}
		}
		// cout<<min1<<endl;
		// cout<<min2<<endl;
		if (N==1)
			cout<<2<<endl;
		else if (N==2)
			cout<<1<<endl;
		else
			cout<<min(min1,min2)<<endl;
	}
}