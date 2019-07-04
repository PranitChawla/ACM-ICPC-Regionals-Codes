#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,p;
	cin>>n>>p;
	string s;
	cin>>s;
	int a[n+1];
	ll tot=0;
	for (ll i=0;i<n;i++)
	{
		a[i+1]=(int)(s[i]-96);
		//cout<<a[i]<<" ";
	}
	int diff[n+1];
	int temp;
	for (ll i=1;i<=n/2;i++)
	{
		temp=min((max(a[i],a[n-i+1])-min(a[i],a[n-i+1])),(min(a[i],a[n-i+1])+26-max(a[i],a[n-i+1])));
		diff[i]=temp;
		diff[n-i+1]=temp;
	}
	if (p>n/2)
	{
		p=n-p+1;
	}
	ll l=1;
	ll r=n/2;
	int lf=0;
	int rf=0;
	for (ll i=1;i<p;i++)
	{
		if (diff[i]!=0)
		{
			l=i;
			lf=1;
			break;
		}
	}
	for (ll i=n/2;i>p;i--)
	{
		if (diff[i]!=0)
		{
			r=i;
			rf=1;
			break;
		}
	}
	// for (ll i=1;i<=n/2;i++)
	// 	cout<<diff[i]<<" ";
	// cout<<endl;
	// cout<<l<<" "<<r<<endl;
	// cout<<lf<<" "<<rf<<endl;
	if (n==1)
	{
		cout<<0;
		return 0;
	}
	if (lf&&rf)
	{
		if ((p-l)<=(r-p))
		{
			for (ll i=p;i>=l;i--)
			{
				tot+=diff[i];
				tot+=1;
			}
			tot--;
			for (ll i=l;i<=r;i++)
			{
				if (i<=p)
					tot++;
				else
				{
					tot+=diff[i];
					tot++;
				}
			}
			tot--;
		}
		else 
		{
			for (ll i=p;i<=r;i++)
			{
				tot+=diff[i];
				tot+=1;
			}
			tot--;
			for (ll i=r;i>=l;i--)
			{
				if (i>=p)
					tot++;
				else
				{
					tot+=diff[i];
					tot++;
				}
			}
			tot--;
		}
	}
	else if (lf==0&&rf==1)
	{
		for (ll i=p;i<=r;i++)
		{
			tot+=diff[i];
			tot++;
		}
		tot--;
	}
	else if (rf==0&&lf==1)
	{
		for (ll i=p;i>=l;i--)
		{
			tot+=diff[i];
			tot++;
		}
		tot--;
	}
	else
	{
		tot+=diff[p];
	}
	cout<<tot;
}