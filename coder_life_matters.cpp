#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		int a[30];
		int f=0;
		for (int i=0;i<30;i++)
			cin>>a[i];
		ll count=0;
		for (int i=0;i<30;i++)
		{
			if (a[i]==1)
			{
				count=0;
				while (a[i]==1&&i<30)
				{
					count++;
					i++;
				}
			}
			if (count>5)
			{
				f=1;
				break;
			}
		}
		if (f)
			cout<<"#coderlifematters"<<endl;
		else
			cout<<"#allcodersarefun"<<endl;
	}
}