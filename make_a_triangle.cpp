#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if ((a+b-c)>0&&(b+c-a)>0&&(c+a-b)>0)
		cout<<0<<endl;
	else 
	{
		cout<<min((c-a-b),min((a-b-c),(b-a-c)))+1;
	}
}