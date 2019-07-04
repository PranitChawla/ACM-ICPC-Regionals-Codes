#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll k;
	cin>>k;
	if (k>36)
		cout<<-1;
	else
		{
			for (int i=0;i<k/2;i++)
				cout<<8;
			for (int i=0;i<k%2;i++)
				cout<<4;
		}
}