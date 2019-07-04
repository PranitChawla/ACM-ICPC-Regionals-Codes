#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string a,b;
	cin>>a>>b;
	string::iterator it,it2;
	it=a.end()-1;
	it2=b.end()-1;
	while (it>=a.begin()&&it2>=b.begin())
	{
		if (*it==*it2)
		{
			it--;
			it2--;
		}
		else
			break;
	}
	//cout<<*it<<" "<<*it2<<endl;
	cout<<it-a.begin()+it2-b.begin()+2;
}