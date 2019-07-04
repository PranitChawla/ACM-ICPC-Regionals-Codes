#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	int a[n];
	ll sum=0;
	ll count=0;
	for (ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if (a[i]==0)
			count++;
	}
	//cout<<sum<<endl;
	sort(a,a+n);
	int flag=0;
	if (sum%3==0)
		flag=1;
	else
	{
		for (ll i=0;i<n;i++)
		{
			if (a[i]%3==sum%3)
			{
				flag=1;
				a[i]=-1;
				break;
			}
		}
		if (flag==0)
		{
		if (sum%3==1)
			{
				int count=0;
				for (ll i=0;i<n;i++)
				{
					if (a[i]%3==2)
						count++;
				}	
				if (count>=2)
				{
				 	count=0;
					for (ll i=0;i<n;i++)
					{
						if (a[i]%3==2)
						{
							flag=1;
							a[i]=-1;
							count++;
						}
						if (count>=2)
							break;
					}
				}
			}
		else
		{
			int count=0;
				for (ll i=0;i<n;i++)
				{
					if (a[i]%3==1)
						count++;
				}	
				if (count>=2)
				{
				 	count=0;
					for (ll i=0;i<n;i++)
					{
						if (a[i]%3==1)
						{
							flag=1;
							a[i]=-1;
							count++;
						}
						if (count>=2)
							break;
					}
				}	
		}
	}
	}
	if (count==0||flag==0)
		cout<<-1;
	else
	{
		sort(a,a+n);
		ll count_0=0;
		ll count_1=0;
		for (ll i=0;i<n;i++)
		{
			if (a[i]==0)
				count_0++;
			if (a[i]==-1)
				count_1++;
		}
		if (count_0+count_1==n)
			cout<<0;
		else
		{
		for (ll i=n-1;i>=0;i--)
		{
			if (a[i]!=-1)
			cout<<a[i];
		}
		}
	}

}