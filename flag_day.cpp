#include <bits/stdc++.h>
#include <tuple>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	map <ll,int> table;
	vector < tuple <ll,ll,ll> > list;
	for (int i=0;i<m;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		list.push_back(make_tuple(a,b,c));
	}
	vector < tuple <ll,ll,ll> >::iterator it;
	for (it=list.begin();it!=list.end();it++)
	{
		tuple <ll,ll,ll> a;
		a=*it;
		ll f,g,h;
		f=get<0>(a);
		g=get<1>(a);
		h=get<2>(a);
		bool res1,res2,res3;
		res1=(table.find(f)==table.end());
		res2=(table.find(g)==table.end());
		res3=(table.find(h)==table.end());
		if (res1&&res2&&res3)
			{
				table.insert(make_pair(f,1));
				table.insert(make_pair(g,2));
				table.insert(make_pair(h,3));
			}
		else if (!res1&&res2&&res3)
		{
			int temp=table.find(f)->second;
			if (temp==1)
			{
				table.insert(make_pair(g,2));
				table.insert(make_pair(h,3));
			}
			else if (temp==2)
			{
				table.insert(make_pair(g,1));
				table.insert(make_pair(h,3));	
			}
			else if (temp==3)
			{
				table.insert(make_pair(g,1));
				table.insert(make_pair(h,2));	
			}
		}
		else if (res1&&!res2&&res3)
		{
			int temp=table.find(g)->second;
			if (temp==1)
			{
				table.insert(make_pair(f,2));
				table.insert(make_pair(h,3));
			}
			else if (temp==2)
			{
				table.insert(make_pair(f,1));
				table.insert(make_pair(h,3));	
			}
			else if (temp==3)
			{
				table.insert(make_pair(f,1));
				table.insert(make_pair(h,2));	
			}
		}
		else if (res1&&res2&&!res3)
		{
			int temp=table.find(h)->second;
			if (temp==1)
			{
				table.insert(make_pair(f,2));
				table.insert(make_pair(g,3));
			}
			else if (temp==2)
			{
				table.insert(make_pair(f,1));
				table.insert(make_pair(g,3));	
			}
			else if (temp==3)
			{
				table.insert(make_pair(f,1));
				table.insert(make_pair(g,2));	
			}
		}
		else if (!res1&&!res2&&res3)
		{
			int temp1=table.find(f)->second;
			int temp2=table.find(g)->second;
			if ((temp1==1&&temp2==2)||(temp1==2&&temp2==1))
			{
				table.insert(make_pair(h,3));
			}
			else if ((temp1==2&&temp2==3)||(temp1==3&&temp2==2))
			{
				table.insert(make_pair(h,1));	
			}
			else if ((temp1==1&&temp2==3)||(temp1==3&&temp2==1))
			{
				table.insert(make_pair(h,2));	
			}
		}
		else if (res1&&!res2&&!res3)
		{
			int temp1=table.find(g)->second;
			int temp2=table.find(h)->second;
			if ((temp1==1&&temp2==2)||(temp1==2&&temp2==1))
			{
				table.insert(make_pair(f,3));
			}
			else if ((temp1==2&&temp2==3)||(temp1==3&&temp2==2))
			{
				table.insert(make_pair(f,1));	
			}
			else if ((temp1==1&&temp2==3)||(temp1==3&&temp2==1))
			{
				table.insert(make_pair(f,2));	
			}
		}
		else if (!res1&&res2&&!res3)
		{
			int temp1=table.find(f)->second;
			int temp2=table.find(h)->second;
			if ((temp1==1&&temp2==2)||(temp1==2&&temp2==1))
			{
				table.insert(make_pair(g,3));
			}
			else if ((temp1==2&&temp2==3)||(temp1==3&&temp2==2))
			{
				table.insert(make_pair(g,1));	
			}
			else if ((temp1==1&&temp2==3)||(temp1==3&&temp2==1))
			{
				table.insert(make_pair(g,2));	
			}
		}
	}
	map <ll,int>::iterator it1;
	for (it1=table.begin();it1!=table.end();it1++)
		cout<<it1->second<<" ";
}