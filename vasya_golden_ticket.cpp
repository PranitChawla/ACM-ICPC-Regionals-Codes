#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[n];
	int sum=0;
	vector <int> fac;
	for (int i=0;i<n;i++)
	{
		a[i]=(int)s[i]-48;
		sum+=a[i];
	}
	int fl=0;
	int j;
	//cout<<sum<<endl;
	for (int i=2;i<=n;i++)
	{
		if (sum%i==0)
		{
			int st=0;
			for (j=0;j<n;j++)
			{
				
				if (st<sum/i)
				{
					st+=a[j];
				}
				if (st>sum/i)
				{
					break;
				}
				if (st==sum/i)
					{
						st=0;
						continue;
					}
			}
			if (j==n&&st==0)
			{
				fl=1;
				break;
			}
		}
	}
	if (fl)
		cout<<"YES";
	else
		cout<<"NO";

}