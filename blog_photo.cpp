#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool p_2 (ll a)
{
	if (!(a&(a-1)))
		return true;
	else
		return false;
}
int main()
{
	ll h,w;
	cin>>h>>w;
	cout<<p_2(h)<<" "<<p_2(w)<<endl;
	if (p_2(h)&&!p_2(w))
	{
		double ratio;
		ratio=(double)h/w;
		if (ratio>=0.8&&ratio<=1.25)
		{
			cout<<h<<" "<<w;
		}
		else
		{
			w=floor(h/(double)0.8);
			cout<<h<<" "<<w;
		}
	}
	else if (p_2(w)&&!p_2(h))
	{
		h=floor(w*(double)1.25);
		cout<<h<<" "<<w;
	}
	else if (!p_2(w)&&!p_2(h))
	{
		ll a=(ll)log2(h);
		ll b=(ll)log2(w);
		a=pow(2,a);
		b=pow(2,b);
		ll tw,th;
		tw=floor(a/double(0.8));
		th=floor(b*(double)1.25);
		if (a*tw<b*th)
		{
			h=a;
			w=tw;
		}
		else if (a*tw>b*th)
		{
			w=b;
			h=th;
		}
		else 
		{
			if (a>th)
			{
				h=a;
				w=tw;
			}
			else
			{
				w=b;
				h=th;
			}
		}
		cout<<h<<" "<<w;
	}
	else
	{
		double ratio=(double)h/double(w);
		if (ratio>=0.8&&ratio<=1.25)
			cout<<h<<" "<<w;
		else 
		{
			ll tw,th;
			tw=floor(h/(double)0.8);
			th=floor(w*(double)1.25);
			if (tw*h>th*w)
			{
				cout<<h<<" "<<tw;	
			}
			else if (tw*h<th*w)
			{
				cout<<th<<" "<<w;
			}
			else 
			{
				if (th>h)
					cout<<th<<" "<<w;
				else
					cout<<w<<" "<<th;
			}
		}
	}
}