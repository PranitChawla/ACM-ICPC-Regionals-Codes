#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	cin>>n;
	vector <int> list[n+1];
	for (int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		for (int j=0;j<m;j++)
		{
			int temp;
			cin>>temp;
			list[i].push_back(temp);
		}
	}
	int i,j;
	for (i=0;i<n;i++)
	{
		int flag=0;
		for (j=0;j<n;j++)
		{
			if (i!=j)
			{
				vector <int>::iterator it,it2;
				it=list[i].begin();
				it2=list[j].begin();
				sort(list[i].begin(),list[i].end());
				sort(list[j].begin(),list[j].end());	
				vector <int> c;
			while (it!=list[i].end()&&it2!=list[j].end())
			{
			//cout<<*it<<" "<<*it2<<endl;
			if (*it<*it2)
			it++;
		else if (*it2<*it)
			it2++;
		else
		{
			c.push_back(*it);
			it++;
			it2++;
		}
	}			
				if (c.size()==list[j].size())
				{
					cout<<"NO"<<endl;
					flag=1;
					break;
				}
			}
		}
		if (flag==0)
			cout<<"YES"<<endl;

		//cout<<i<<endl;
	}

}