#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef struct 
{
	ll value;
	ll index;
	int flag;
}data;
bool compare (data a, data b)
{
	return a.value>b.value;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin>>n;
	ll a[n+1];
	ll f[n+1]={0};
	ll b[n+1];
	vector <data> neg;
	vector <data> pos;
	vector <data> zero;
	// vector <ll> neg;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]<0)
			{
				data temp;
				temp.value=a[i];
				temp.index=i;
				temp.flag=0;
				neg.push_back(temp);
			}
		else if (a[i]>0)
			{
				data temp;
				temp.value=a[i];
				temp.index=i;
				temp.flag=0;
				pos.push_back(temp);
			}
		else
			{
				data temp;
				temp.value=a[i];
				temp.index=i;
				temp.flag=0;
				zero.push_back(temp);
			}
	}
	if (zero.size()==0)
	{
		if (neg.size()%2==1)
		{
			sort(neg.begin(),neg.end(),compare);
			cout<<2<<" ";
			cout<<neg[0].index<<endl;
			neg[0].flag=-1;
			f[neg[0].index]=-1;
		}
		ll k=0;
		for (ll i=0;i<pos.size();i++)
		{
			b[k++]=pos[i].index;
		}
		for (ll i=0;i<neg.size();i++)
		{
			if (neg[i].flag==0)
			b[k++]=neg[i].index;
		}
		for (ll i=0;i<k-1;i++)
		{
			cout<<1<<" "<<b[i]<<" "<<b[i+1]<<endl;
		}
	}
	else
	{
		ll c=0;
		for (ll i=0;i<zero.size()-1;i++)
		{
			cout<<1<<" "<<zero[i].index<<" "<<zero[i+1].index<<endl;
			c++;
		}
		ll zerol=zero[zero.size()-1].index;
		if (neg.size()%2==1)
		{
			sort(neg.begin(),neg.end(),compare);
			cout<<1<<" "<<neg[0].index<<" "<<zerol<<endl;
			c++;
			if (c<n-1)
			{
			cout<<2<<" ";
			cout<<zerol<<endl;
			}
			neg[0].flag=-1;
			//f[neg[0].index]=-1;
		}
		else
		{
			if (c<n-1)
			cout<<2<<" "<<zerol<<endl;
		}
		ll k=0;
		for (ll i=0;i<pos.size();i++)
		{
			b[k++]=pos[i].index;
		}
		for (ll i=0;i<neg.size();i++)
		{
			if (neg[i].flag==0)
			b[k++]=neg[i].index;
		}
		for (ll i=0;i<k-1;i++)
		{
			cout<<1<<" "<<b[i]<<" "<<b[i+1]<<endl;
		}
	}
}