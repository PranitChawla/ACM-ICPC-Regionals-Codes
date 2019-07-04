#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	int f=0;
	for (int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if (a==1)
			f=1;
	}
	if (f)
		cout<<"HARD";
	else
		cout<<"EASY";
}