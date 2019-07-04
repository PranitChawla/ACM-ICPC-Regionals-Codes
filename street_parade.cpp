#include <bits/stdc++.h>
using namespace std;
int main()
{
	while (1)
	{
		int n;
		cin>>n;
		if (n==0)
			break;
		else
		{
			int a[n+1];
			for (int i=1;i<=n;i++)
				cin>>a[i];
			bool result=true;
			int counter=1;
			stack <int> s;
			for (int j=1;j<=n;j++)
			{
			while (s.size()>0&&s.top()==a[j])
			{
				s.pop();
				counter++;
			}
			if (a[j]==counter)
				counter++;
			else if (s.size()>0&&s.top()<a[j])
			{
				result=false;
				break;
			}
			else
			{
				s.push(a[j]);
				//counter++;
			}
			}
			if (result)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
}
}