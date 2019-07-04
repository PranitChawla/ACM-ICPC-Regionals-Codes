#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isvalid (ll i,ll j)
{
	if (i>=0&&i<=2&&j>=0&&j<=2)
		return true;
	else
		return false;
}
int main()
{
	ll t;
	cin>>t;
	while (t--)
	{
		string s[3];
		for (ll i=0;i<3;i++)
			cin>>s[i];
		int f=0;
		for (ll i=0;i<3;i++)
		{
			for (ll j=0;j<3;j++)
			{
				if (s[i][j]=='l')
				{
					if (isvalid(i+1,j)&&isvalid(i+1,j+1))
					{
						if (s[i+1][j]=='l'&&s[i+1][j+1]=='l')
						{
							f=1;
							break;
						}
					}
				}

			}
			if (f)
				break;
		}
		if (f)
			cout<<"yes"<<endl;
		else 
			cout<<"no"<<endl;
	}
}