#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		ll N,K;
		cin>>N>>K;
		ll a[N];
		ll b[N];
		for (int i=0;i<N;i++)
			cin>>a[i];
		for (int i=0;i<N;i++)
			cin>>b[i];
		sort(a,a+N);
		sort(b,b+N);
		ll i=0;
		ll j=0;
		ll count=0;
		while (i<N&&j<N)
		{
			if (a[i]>b[j])
				j++;
			else if (a[i]<b[j])
			{
				i++;
				j++;
				count++;
			}
			else
			{
				j++;
			}
		}
		if (count>=K)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}