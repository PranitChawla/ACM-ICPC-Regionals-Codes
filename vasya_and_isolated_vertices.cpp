#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll min,max;
	min=n-2*m;
	max=n-ceil((double)((1+sqrt(1+8*m))/(double)2));
	if (m==0)
		cout<<n<<" "<<n<<endl;
	else if (min<0&&max>=0)
		cout<<0<<" "<<max;
	else if (min>0&&max<=0)
		cout<<min<<" "<<0;
	else if (min<0&&max<0)
		cout<<0<<" "<<0;
	else
		cout<<min<<" "<<max;
}