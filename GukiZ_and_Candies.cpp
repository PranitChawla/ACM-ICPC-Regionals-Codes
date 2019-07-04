#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n,k,x;
		cin>>n>>k>>x;
		ll p[k+1];
		ll sum=0;
		for (ll i=1;i<=k;i++)
			{
				cin>>p[i];
				sum+=p[i];
			}
		sort(p+1,p+k+1);
		ll temp=k+1;
		ll min=p[1];
		ll max=p[k];
		ll max_possible=min+x;
		if (n-k>=1)
		{
		if (max_possible-(n-k-1)>max)
		{
			//cout<<"check"<<endl;
			sum+=((n-k)*max_possible-(n-k-1)*(n-k)/2);
		}
		else
		{
			ll diff=max_possible-max;
			sum+=((diff)*(max_possible)-(diff-1)*(diff)/2);
			ll rem=n-k-diff;
			ll right=k;
			ll left=k-1;
			while (left>=1&&right>=1&&rem>0)
			{
				ll bet=p[right]-p[left]-1;
				if (bet>=rem)
				{
					sum+=((p[right]-1)*(p[right])/2-(p[right]-rem-1)*(p[right]-rem)/2);
					rem=0;
					break;
				}
				else
				{
					sum+=((p[right]-1)*(p[right])/2-p[left]*(p[left]+1)/2);
					rem-=bet;
					left--;
					right--;
				}

			}
		}
		}
		cout<<sum<<endl;
	}
}