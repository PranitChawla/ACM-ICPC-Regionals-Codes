#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{	
	for (ll i=1;i<=10;i++)
	{
		for (ll j=1;j<=10;j++)
		{
			for (ll k=1;k<=10;k++)
			{
				for (ll m=1;m<=10;m++)
				{
					if ((i^j)==(k^m))
						cout<<i<<" "<<j<<" "<<k<<" "<<m<<endl;
				}
			}
		}
	}
}