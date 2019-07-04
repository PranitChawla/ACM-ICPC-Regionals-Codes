#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		int n,m;
		cin>>n>>m;
		string::iterator it,it2,i,t;
		it=s.begin()+n;
		it2=s.begin()+m;
		//cout<<*it<<" "<<*it2<<endl;
		sort(it,it2);
		//cout<<s<<endl;
		for (t=s.begin();t<it;t++)
			cout<<*t;
		for (t=it2;t>=it;t--)
			cout<<*t;
		for (t=it2+1;t!=s.end();t++)
			cout<<*t;
		cout<<endl;
	}
}