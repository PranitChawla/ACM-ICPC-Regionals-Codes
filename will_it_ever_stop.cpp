#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if (n&&!(n&(n-1)))
		cout<<"TAK"<<endl;
	else
		cout<<"NIE"<<endl;
}