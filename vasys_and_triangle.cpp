#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll k;
	cin>>k;
	if ((2*n*m)%(k)!=0)
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		cout<<0<<" "<<0<<endl;
		if (k==2)
		{
			cout<<n<<" "<<0<<endl;
			cout<<0<<" "<<m<<endl;
		}
		else if (n%k==0)
		{
			cout<<2*n/k<<" "<<0<<endl;
			cout<<0<<" "<<m<<endl;
		}
		else if (m%k==0)
		{
			cout<<0<<" "<<2*m/k<<endl;
			cout<<n<<" "<<0<<endl;
		}
		else if ((2*n)%k==0)
		{
			cout<<2*n/k<<" "<<0<<endl;
			cout<<0<<" "<<m<<endl;
		}
		else if ((2*m)%k==0)
		{
			cout<<0<<" "<<2*m/k<<endl;
			cout<<n<<" "<<0<<endl;
		}
		else if ((n*m)%k==0)
		{
		 	if (2*(n*m)/k<=m)
		 	{
		 		cout<<0<<" "<<2*(n*m)/k<<endl;
		 		cout<<1<<" "<<0<<endl;
		 	}
		 	else if ((n*m)/k<=m)
		 	{
		 		cout<<0<<" "<<(n*m)/k<<endl;
		 		cout<<2<<" "<<0<<endl;
		 	}
		 	else if (2*(n*m)/k<=n)
		 	{
		 		cout<<2*(n*m)/k<<" "<<0<<endl;
		 		cout<<0<<" "<<1<<endl;
		 	}
		 	else if ((n*m)/k<=n)
		 	{
		 		cout<<(n*m)/k<<" "<<0<<endl;
		 		cout<<0<<" "<<2<<endl;
		 	}
		 	else 
		 		cout<<"NO"<<endl;
		}
	}
}