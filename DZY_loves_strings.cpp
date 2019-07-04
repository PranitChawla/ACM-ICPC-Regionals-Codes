#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	map <char,int>  table;
	int arr[26];
	int i=0;
	for (char a='a';a<='z';a++)
	{
		int temp;
		cin>>temp;
		table.insert(pair <char,int> (a,temp));
		arr[i]=temp;
		i++;
	}
	string::iterator it;
	int total=0;
	i=1;
	for (it=s.begin();it!=s.end();it++)
	{
		total+=(table.find(*it)->second)*(i);
		i++;
	}
	sort(arr,arr+26);
	int max_val=arr[25];
	i=s.length()+1;
	for (int j=0;j<k;j++)
	{
		total+=(i*max_val);
		i++;
	}
	cout<<total;
}