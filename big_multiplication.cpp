#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while (T)
	{
	string m;
	string n;
	cin>>m>>n;
	long long int sum_m;
	long long int sum_n;
	sum_m=0;
	sum_n=0;
	string::iterator it;
	for (it=m.begin();it!=m.end();it++)
		sum_m+=(int)(*it)-48;
	for (it=n.begin();it!=n.end();it++)
		sum_n+=(int)(*it)-48;
	cout<<((sum_m%3*sum_n%3)%3)<<endl;
	T--;
	}
}