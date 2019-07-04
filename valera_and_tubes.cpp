#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll num_2=k-1;
	ll left=n*m-2*(k-1);
	ll count=0;
	ll i=1;
	ll j=1;
	if (m%2==0)
	{
	while (1)
	{
		//cout<<count<<" "<<num_2<<endl;
		if (count<num_2)
		{
			if (i%2==1)
			{
				if (j<m)
				{
					cout<<2<<" "<<i<<" "<<j<<" "<<i<<" "<<j+1<<endl;
					count++;
					j+=2;
				}
				else if (j==m+1)
				{
					i++;
					j=m;
				}
			}
			else
			{
				if (j>1)
				{
					cout<<2<<" "<<i<<" "<<j<<" "<<i<<" "<<j-1<<endl;
					count++;
					j-=2;
				}
				else if (j==0)
				{
					i++;
					j=1;
				}
			}
		}
		else
		{
			cout<<left<<" ";
			if (i%2==1)
			{
				if (j==m+1)
				{
					i++;
					j=m;
				}
				// else 
				// 	j++;
			}
			else
			{
				if (j==0)
				{
					j=1;
					i++;
				}
				// else
				// 	j--;
			}
			for (ll k=0;k<left;k++)
			{
				//cout<<"value of k is"<<k<<endl;
				cout<<i<<" "<<j<<" ";
				if (i%2==1)
				{
					if (j<m)
					{
						j++;
					}
					else
					{
						i++;
						j=m;
					}
				}
				else 
				{
					if (j>1)
						j--;
					else
					{
						i++;
						j=1;
					}
				}
			}
			break;
		}
	}
}
else
{
	while (1)
	{
		//cout<<count<<" "<<num_2<<endl;
		if (count<num_2)
		{
			if (i%2==1)
			{
				if (j<m)
				{
					//if (i<10)
					cout<<2<<" "<<i<<" "<<j<<" "<<i<<" "<<j+1<<endl;
					count++;
					j+=2;
				}
				else if (j==m+1)
				{
					j=m;
				}
				else if (j==m)
				{
					//if (i<10)
					cout<<2<<" "<<i<<" "<<j<<" "<<i+1<<" "<<j<<endl;
					count++;
					i++;
					j=m-1;
				}
			}
			else
			{
				if (j>1)
				{
					//if (i<10)
					cout<<2<<" "<<i<<" "<<j<<" "<<i<<" "<<j-1<<endl;
					count++;
					j-=2;
				}
				else if (j==0)
				{
					j=1;
					i++;
				}
				// else if (j==1)
				// {
				// 	//if (i<10)
				// 	cout<<2<<" "<<i<<" "<<j<<" "<<i+1<<" "<<j<<endl;
				// 	i++;
				// 	j=2;
				// 	count++;
				// }
			}
		}
		else
		{
			cout<<left<<" ";
			//cout<<"before left"<<i<<" "<<j;
			if (i%2==1)
			{
				if (j==m+1)
				{
					//i++;
					j=m;
				}
				// else 
				// 	j++;
			}
			else
			{
				if (j==0)
				{
					j=1;
					i++;
				}
				// else if (j==1)
				// 	i++;
				// else
				// 	j--;
			}
			for (ll k=1;k<=left;k++)
			{
				//cout<<"value of k is"<<k<<endl;
				cout<<i<<" "<<j<<" ";
				if (i%2==1)
				{
					if (j<m)
					{
						j++;
					}
					else
					{
						i++;
						j=m;
					}
				}
				else 
				{
					if (j>1)
						j--;
					else
					{
						i++;
						j=1;
					}
				}
			}
			break;
		}
	}
}
}