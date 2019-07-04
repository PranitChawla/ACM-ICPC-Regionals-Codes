#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	 int t;
	 cin>>t;
	 while (t--)
	 {
	 	 ll n;
	 	 cin>>n;
	 	 ll a[n];
	 	 bool b[n+1];
	 	 memset(b,0,sizeof(b));
	 	 for (ll i=0;i<n;i++)
	 	 {
	 	 	cin>>a[i];
	 	 	if (a[i]<=n)
	 	 		b[a[i]]=1;
	 	 }
	 	 ll c=0;
	 	 for (ll i=1;i<=n;i++)
	 	 {
	 	 	if (b[i]==0)
	 	 		c++;
	 	 }
	 	 cout<<c<<endl;
	 }
}