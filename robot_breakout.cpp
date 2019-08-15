#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll q;
	cin>>q;
	while (q--)
	{
		ll n;
		cin>>n;
		ll a[n][6];
		for (ll i=0;i<n;i++)
		{
			for (ll j=0;j<6;j++)
			{
				cin>>a[i][j];
			}
		}
		ll xmin=-100000;
		ll xmax=100000;
		ll ymin=-100000;
		ll ymax=100000;
		ll f=0;
		for (ll i=0;i<n;i++)
		{
			ll xmint,xmaxt,ymint,ymaxt;
			xmint=a[i][0];
			xmaxt=a[i][0];
			ymint=a[i][1];
			ymaxt=a[i][1];
			if (a[i][2]==1)
				xmint=-100000;
			if (a[i][3]==1)
				ymaxt=100000;
			if (a[i][4]==1)
				xmaxt=100000;
			if (a[i][5]==1)
				ymint=-100000;
			if (xmint>xmax||xmaxt<xmin||ymint>ymax||ymaxt<ymin)
			{
				f=1;
				cout<<0<<endl;
				break;
			}
			else
			{
				xmin=max(xmin,xmint);
				ymin=max(ymin,ymint);
				xmax=min(xmax,xmaxt);
				ymax=min(ymax,ymaxt);
			}
		}
		if (!f)
			cout<<1<<" "<<xmin<<" "<<ymin<<endl;	
	}
}