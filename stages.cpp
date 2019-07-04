#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int a[n];
	int i=0;
	string::iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		a[i]=(int)(*it-'a')+1;
		i++;
	}
	sort(a,a+n);
	int sum=a[0];
	int prev=0;
	k--;
	// for (int i=0;i<n;i++)
	// {
	// 	if (i==0)
	// 		sum+=a[i];
	// 	else if (a[i]=a[i-1]>=2)
	// 	{
	// 		sum+=
	// 	}
	// }
	int next=1;
	while (k>0&&prev<n&&next<n)
	{
			if (a[next]-a[prev]>=2)
			{
				sum+=a[next];
				prev=next;
				next++;
				k--;
			}
			else
				next++;
	}
	if (k>0)
		cout<<-1;
	else
		cout<<sum;
}