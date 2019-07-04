#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int c[n];
	for (int i=0;i<n;i++)
		cin>>c[i];
	int left=0;
	int right=n-1;
	ll ans=0;
	while (left<=right)
	{
		if (c[right]==c[left]&&c[right]==2)
		{
			if (right!=left)
			ans+=2*min(a,b);
			else
				ans+=min(a,b);
		}
		else if (c[right]==2)
		{
			if (c[left]==1)
				ans+=b;
			else 
				ans+=a;
		}
		else if (c[left]==2)
		{
			if (c[right]==1)
				ans+=b;
			else 
				ans+=a;
		}
		else if (c[left]!=c[right])
		{
			cout<<-1;
			return 0;
		}
		left++;
		right--;
	}
	cout<<ans;
}