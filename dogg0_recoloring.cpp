#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	string::iterator it;
	ll count[26];
	memset(count,0,sizeof(count));
	//cout<<'z'-97;
	for (it=s.begin();it!=s.end();it++)
	{
		count[(int)*it-97]++;
	}
	int flag=0;
	for (int i=0;i<26;i++)
	{
		if (count[i]>=2)
		{
			flag=1;
			break;
		}
	}
	if (n==1)
		cout<<"Yes";
	else if (flag==0)
		cout<<"No";
	else
		cout<<"Yes";
}