#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll l[n+1];
	ll r[n+1];
	l[0]=0;
	r[0]=0;
	for (ll i=1;i<=n;i++)
		cin>>l[i]>>r[i];
	ll sum=1;
	for (ll i=1;i<=n;i++)
		{
			if (l[i-1]>r[i]||r[i-1]>l[i])
				continue;
			if (r[i]-l[i-1]!=l[i]-r[i-1])
			{
				if (l[i]==r[i])
					sum+=(min(r[i]-l[i-1],l[i]-r[i-1])+1);	
				else
					sum+=(min(r[i]-l[i-1],l[i]-r[i-1]));	
			}
			else
					sum+=min(r[i]-l[i-1],l[i]-r[i-1]);
		}
		cout<<sum;
}