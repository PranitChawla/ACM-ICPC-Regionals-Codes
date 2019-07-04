#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	string::iterator it;
	ll size=pow(10,5)+10;
	ll arr[size];
	ll i=1;
	for (it=s.begin();it!=s.end();it++)
	{
		arr[i]=(int)((*it)-48);
		i++;
	}
	ll num_digs=i-1;
	//cout<<num_digs;
//	cout<<num_digs<<endl;
	// for (int i=1;i<=num_digs;i++)
	//     cout<<arr[i]<<" ";
	//cout<<num_digs;
	int flag=0;
	for (ll i=1;i<=num_digs-1;i++)
	{
		if (arr[i]%2==0&&arr[i]<arr[num_digs])
		{
			flag=1;
			ll temp;
			temp=arr[num_digs];
			arr[num_digs]=arr[i];
			arr[i]=temp;
			break;
		}
	}
	if (flag==0)
	{
		for (ll i=num_digs;i>=1;i--)
		{
			if (arr[i]>arr[num_digs]&&arr[i]%2==0)
			{
		//	cout<<"worked for "<<i<<endl;
			flag=1;
			ll temp;
			temp=arr[num_digs];
			arr[num_digs]=arr[i];
			arr[i]=temp;
			break;
			}
			}
		if (flag==1)
		{
			//ll num=0;
		//	cout<<arr[3]<<endl;
		for (ll i=1;i<=num_digs;i++)
		{
		    cout<<arr[i];
		}
	//	cout<<num;
		}
		else
		{
			cout<<-1;
		}
	}
	else
	{
		for (ll i=1;i<=num_digs;i++)
		{
		    cout<<arr[i];
		}
	}
}