#include <bits/stdc++.h>
#include <fstream>
using namespace std;
bool compare (pair <int,int> a,pair <int,int> b)
{
	return (a.first<b.first);
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,k;
	cin>>n>>k;
	pair <int,int> a[n+1];
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+n+1,compare);
	cout<<a[n-k+1].first<<endl;
	for (int i=n;i>n-k;i--)
		cout<<a[i].second<<" ";
}