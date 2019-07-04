#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll cas[7];
	// memset(cas,0,sizeof(cas));
	for (int i=0;i<7;i++)
		cas[i]=10000000;
	ll n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		ll a;
		string s;
		cin>>a>>s;
		if (s.length()==3)
		{
			cas[6]=min(cas[6],a);
		}
		else if (s.length()==1)
		{
			if (s[0]=='A')
			{
				cas[0]=min(cas[0],a);
			}
			if (s[0]=='B')
			{
				cas[1]=min(cas[1],a);
			}
			if (s[0]=='C')
			{
				cas[2]=min(cas[2],a);
			}
		}
		else
		{
			if (s.compare("AB")==0||s.compare("BA")==0)
			{
				cas[3]=min(cas[3],a);
			}
			if (s.compare("BC")==0||s.compare("CB")==0)
			{
				cas[4]=min(cas[4],a);
			}
			if (s.compare("AC")==0||s.compare("CA")==0)
			{
				cas[5]=min(cas[5],a);
			}
		}
	}
	ll min[8];
	min[0]=cas[0]+cas[1]+cas[2];
	min[1]=cas[0]+cas[4];
	min[2]=cas[1]+cas[5];
	min[3]=cas[2]+cas[3];
	min[4]=cas[6];
	min[5]=cas[3]+cas[4];
	min[6]=cas[4]+cas[5];
	min[7]=cas[3]+cas[5];
	sort(min,min+8);
	if (min[0]>=10000000)
		cout<<-1;
	else
	cout<<min[0];
}