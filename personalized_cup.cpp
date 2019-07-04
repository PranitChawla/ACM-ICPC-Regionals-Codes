#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	int num_rows;
	for (int i=1;i<=5;i++)
	{
		if ((s.length()/i)<20)
		{
			num_rows=i;
			break;
		}
		else if((s.length()/i)==20)
		{
			if(s.length()%i==0)
			{
				num_rows=i;
				break;
			}

		}
	}	
	int num_cols=ceil((double)s.length()/num_rows);
	int total=num_rows*num_cols;
	int as=total-s.length();
	// cout<<as<<endl;
	ll k=0;
	cout<<num_rows<<" "<<num_cols<<endl;
	for(ll i=0;i<num_rows;i++)
	{
		for(ll j=0;j<num_cols;j++)
		{
			if(j==num_cols-1&&as>0)
			{
				as--;
				cout<<"*";
			}
			else
			{
				cout<<s[k++];
			}
		}
		cout<<endl;
	}
}