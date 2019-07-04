#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k,s;
	cin>>n>>k>>s;
	ll q,r;
	q=s/(n-1);
	r=s%(n-1);
	ll max=k*(n-1);
	vector <ll> moves;
	if (max<s)
		cout<<"NO"<<endl;
	else 
		{
			if (r==0&&k==q)
			{
				for (ll i=0;i<q;i++)
				{
					if (i%2==0)
						moves.push_back(n);
					else
						moves.push_back(1);
				}
				cout<<"YES"<<endl;
				for (ll i=0;i<q;i++)
					cout<<moves[i]<<" ";
			}
			else if (r==0&&k!=q)
			{
				for (ll i=0;i<q-1;i++)
				{
					if (i%2==0)
						moves.push_back(n);
					else
						moves.push_back(1);
				}
				ll moves_left=k-(q-1);
				ll dist_left=s-(q-1)*(n-1);
				if (moves.size()==0)
				{
					for (ll i=0;i<moves_left-1;i++)
				{
					if (i%2==0)
						moves.push_back(2);
					else 
						moves.push_back(1);
					dist_left--;
				}
				vector <ll>::iterator it;
				it=moves.end()-1;
				if (dist_left==0)
					cout<<"NO"<<endl;
				else
				{
				if (*it==1)
				{
					moves.push_back(1+dist_left);
				}
				else 
					moves.push_back(2+dist_left);
					cout<<"YES"<<endl;
				it=moves.begin();
				while (it!=moves.end())
				{
					cout<<*it<<" ";
					it++;
				}
				}
				}	
				else
				{
				vector <ll>::iterator it;
				it=moves.end()-1;
				if (*it==1)
				{
				for (ll i=0;i<moves_left-1;i++)
				{
					if (i%2==0)
						moves.push_back(2);
					else 
						moves.push_back(1);
					dist_left--;
				}
				if (dist_left==0)
					cout<<"NO"<<endl;
				else{
				it=moves.end()-1;
				if (*it==1)
				{
					moves.push_back(1+dist_left);
				}
				else 
					moves.push_back(2+dist_left);
				}
				else 
				{
					for (ll i=0;i<moves_left-1;i++)
				{
					if (i%2==0)
						moves.push_back(n-1);
					else 
						moves.push_back(n);
					dist_left--;
				}
				it=moves.end()-1;
				if (*it==n)
				{
					moves.push_back(n-dist_left);
				}
				else 
					moves.push_back(n-1-dist_left);
				}
				cout<<"YES"<<endl;
				it=moves.begin();
				while (it!=moves.end())
				{
					cout<<*it<<" ";
					it++;
				}
				}
				}
				}
				else
				{
				ll moves_left=k-q;
				if (r<moves_left)
					cout<<"NO"<<endl;
				else if (r==moves_left)
				{
					for (ll i=0;i<q;i++)
					{
					if (i%2==0)
						moves.push_back(n);
					else
						moves.push_back(1);
					}
					vector <ll>::iterator it;
					it=moves.end()-1;
					if (*it==1)
					{
						for (int i=0;i<r;i++)
						{
							if (i%2==0)
								moves.push_back(2);
							else 
								moves.push_back(1);
						}
					}
					else
					{
						for (int i=0;i<r;i++)
						{
							if (i%2==0)
								moves.push_back(n-1);
							else 
								moves.push_back(n);
						}
					}
					cout<<"YES"<<endl;
				it=moves.begin();
				while (it!=moves.end())
				{
					cout<<*it<<" ";
					it++;
				}
				}
				else
				{
					for (ll i=0;i<q;i++)
					{
					if (i%2==0)
						moves.push_back(n);
					else
						moves.push_back(1);
					}
					vector <ll>::iterator it;
					it=moves.end()-1;
					ll dist_left=r;
					if (*it==1)
					{
						for (int i=0;i<moves_left-1;i++)
						{
							if (i%2==0)
								moves.push_back(2);
							else 
								moves.push_back(1);
							dist_left--;
						}
						it=moves.end()-1;
						if (*it==1)
						{
							moves.push_back(1+dist_left);
						}
						else
							moves.push_back(2+dist_left);
					}
					else
					{
						for (int i=0;i<moves_left-1;i++)
						{
							if (i%2==0)
								moves.push_back(n-1);
							else 
								moves.push_back(n);
							dist_left--;
						}
						it=moves.end()-1;
						if (*it==n)
						{
							moves.push_back(n-dist_left);
						}
						else
							moves.push_back(n-1-dist_left);	
					}
					cout<<"YES"<<endl;
				it=moves.begin();
				while (it!=moves.end())
				{
					cout<<*it<<" ";
					it++;
				}	
				}

			}
		}	
}
